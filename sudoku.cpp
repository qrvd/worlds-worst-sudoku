
struct Cell {
	union {
		unsigned int value;
		std::vector<unsigned int> values;
	};

	enum { Number, Range } type;
};

Cell newNumber(unsigned int v) {
	Cell c = { .value = v, .type = Cell::Number };
	return c;
}

Cell newRange(std::vector<unsignd int> values = ()) {
	Cell c = { .values = values, .type = Cell::Range };
	return c;
}

std::vector<Cell> neighbors(Cell c) {
}

Cell simplify(Cell c) {
	if (c.values.size() == 1) {
		return newNumber(c.values[0]);
	}
	return c;
}
