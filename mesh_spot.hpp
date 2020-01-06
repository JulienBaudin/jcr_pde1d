

#ifndef mesh_spot_HPP
#define mesh_spot_HPP

#include <vector>


namespace project
{
	class mesh{
	
	public: 
	grid_mesh(double spot, double maturity, double volatility, double time_step, size_t steps);
	~grid_mesh();
	std::vector<double> Getvector_time() const;
	std::vector<double> Getvector_stock() const;
	
	
	private: 
	
	std::vector<double> Getvector_time;
	std::vector<double> Getvector_stock;
	
	}  
}

#endif