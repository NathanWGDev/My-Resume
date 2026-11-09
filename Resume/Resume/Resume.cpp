#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <windows.h>

// ANSI Escape Codes for Terminal Color Styling
namespace Theme {
	const std::string RESET = "\033[0m";
	const std::string BOLD = "\033[1m";
	const std::string CYAN = "\033[36m";
	const std::string GREEN = "\033[32m";
	const std::string YELLOW = "\033[33m";
	const std::string BLUE = "\033[34m";
	const std::string GRAY = "\033[90m";
}

struct Project {
	std::string name;
	std::string tech_stack;
	std::string description;
	std::string description2;
	std::string description3;
};

struct Experience {
	std::string role;
	std::string company;
	std::string duration;
	std::vector<std::string> bullets;
};

struct Education {
	std::string degree;
	std::string school;
	std::string graduation;
};

struct  ProffesionalSummary{

	std::string Summary;
};

class Resume {
private:
	// --- Personal Information ---
	const std::string name = "Nathan Wathingira";
	const std::string title = "Software Engineer | Junior Programmer";
	const std::string email = "NWathingira@alumni.fullsail.edu";
	const std::string github = "https://github.com/NathanWGDev";
	const std::string linkedin = "https://www.linkedin.com/in/nathan-wathingira-775976246/";
	const std::string phone = "(301)-272-5555";
	const std::string location = "Lanham, Maryland";

	std::vector<ProffesionalSummary> summary = {
		{"Organized and adaptable recent graduate with experience collaborating on team projects, troubleshooting issues, testing systems, maintaining project files, and following structured development workflows."},
		{"Strong computer skills, attention to detail, and a methodical approach to solving problems. Seeking an entry - level role"}
	};

	// --- Datasets ---
	std::vector<std::pair<std::string, std::string>> skills = {
		{"Languages", "C++, C#, SQL"},
		{"Systems/Tools", "CMake, Visual Studio, Git, GitHub, Perforce, Trello"},
		{"Programming", "Object-Oriented Programming, Data Structures, Algorithms, Systems Programming, MATLAB"},
		{"Game Development", "Unreal Engine 5, Unity3D/2D, Gameplay Systems, AI, UI Programming, ECS"},
		{"Development Practices", "Scrum, Agile Development, QA/Testing, Debugging, Performance Optimization, Collaboration"}
	};

	std::vector<Experience> work_history = {
		{
		   "Full Sail University Alumni Runway Team",
		   "Gameplay Systems Lead",
		   "September 2026 - October 2026",
		 {
			"Collaborated with a team of 5 developers to design and implement new gameplay features for a mobile game.",
			"Created enemy scripts and behaviors using C# and Unity.",
			"Managed the development lifecycle of gameplay assets from concept stages to a workable prototype.\n"
		 }

		}
	};
	
	std::vector<Experience> work_history2 = {
		{
		   "Little Caesars",
		   "Shift Worker",
		   "June 2013 - January 2015",
		 {
			"Provided excellent customer service and maintained a clean, organized workspace.",
			"Assisted in training new employees and ensuring adherence to company policies and procedures.",
			"Worked collaboratively with team members to meet daily operational goals and maintain high-quality standards.\n"
		 }

		}
	};

	std::vector<Experience> work_history3 = {
	{
	   "California Tortilla",
	   "Shift Lead",
	   "June 2015 - March 2017",
	 {
		"Managed daily operations, including opening and closing procedures, cash handling, and inventory management.",
		"Created and implemented staff schedules, ensuring adequate coverage during peak hours.",
		"Trained and mentored new employees, providing guidance on customer service, food preparation, and safety protocols.\n"
	 }

	}
	};

	std::vector<Experience> work_history4 = {
	{
	   "Wawa",
	   "Shift Lead In Training",
	   "May 2017 - March 2019",
	 {
		"Worked in a fast-paced environment, managing customer orders, cash handling, and inventory control.",
		"Trained and worked with team members to ensure efficient operations and high-quality customer service.",
		"Assisted in implementing new processes and procedures to improve workflow and enhance the customer experience.\n"
	 }

	}
	};


	std::vector<Project> portfolio = {
		{
			"Castra Defenders(FPS Game)",
			"C#, Unity3D",			
			"Created and tested multiple enemy types with distinct behaviors across several levels",
			"Implemented visual and audio feedback features and checked system behavior during testing",
			"Tested and optimized gameplay systems to maintain stable performance on target hardware"
		},
		{
			"Harena (Beat Em Up Game)",
			"C#, Unity3D",
			"Created 6+ enemy archetypes in Unity using C#, implementing distinct attack patterns, abilities, and AI behaviors across multiple levels.",
			"Developed 5+ visual and audio feedback systems, including screen shake, particle effects, health bar effects, hit markers, and sound cues.",
			"Tested and optimized gameplay systems to maintain stable performance on target hardware."
		},
		{
			"Corpse Bloom (Horror Survival Game)",
			"C#, Unity3D",
			"Constructed a modular weapon system in Unity using C#, including configurable weapon mechanics and randomized shotgun pellet spread for varied combat encounters.",
			"Developed a reusable throw-able-object system for gameplay objects used to alert enemies or illuminate surrounding areas.",
			"Designed systems with flexibility for additional throw-able object types and gameplay functionality."
		},
		{
			"Game of Life",
			"C++",
			"Implemented the cellular automaton rules for the Game of Life simulation.",
			"Developed a console-based application that allows users to visualize the evolution of the game over time.",
			"Optimized the simulation for performance and memory usage, allowing for larger grid sizes and faster updates."
		}
	};

	std::vector<Education> academia = {
		{"B.S. of Computer Science in Game Development", "FullSail University, Winter Park, FL", "July 2025"}
	};

	// --- Helper Layout Methods ---
	void printSectionHeader(const std::string& title) const {
		std::cout << "\n" << Theme::BOLD << Theme::CYAN << "=== " << title << " ===" << Theme::RESET << "\n";
	}

	void printBullet(const std::string& text) const {
		std::cout << "  " << Theme::GREEN << "• " << Theme::RESET << text << "\n";
	}

public:
	void display() const {
		// --- Header Block ---
		std::cout << std::string(60, '=') << "\n";
		std::cout << Theme::BOLD << Theme::YELLOW << " " << name << Theme::RESET << "\n";
		std::cout << " " << Theme::GRAY << title << Theme::RESET << "\n";
		std::cout << std::string(60, '-') << "\n";
		std::cout << " " << Theme::BLUE << "Email: " << Theme::RESET << email << "\n";
		std::cout << " " << Theme::BLUE << "GitHub: " << Theme::RESET << github << "\n";
		std::cout << " " << Theme::BLUE << "LinkedIn: " << Theme::RESET << linkedin << "\n";
		std::cout << " " << Theme::BLUE << "Phone: " << Theme::RESET << phone << "\n";
		std::cout << " " << Theme::BLUE << "Location: " << Theme::RESET << location << "\n";
		std::cout << std::string(60, '=') << "\n";

		// --- Professional Summary ---
		printSectionHeader("PROFESSIONAL SUMMARY");
		for (const auto& sum : summary) {
			std::cout << "  " << sum.Summary << "\n";
		}

		// --- Technical Skills ---
		printSectionHeader("TECHNICAL SKILLS");
		for (const auto& [category, list] : skills) {
			std::cout << "  " << Theme::BOLD << std::left << std::setw(16)
				<< (category + ":") << Theme::RESET << list << "\n";
		}

		// --- Professional Experience ---
		printSectionHeader("EXPERIENCE");
		for (const auto& exp : work_history) {
			std::cout << "  " << Theme::BOLD << exp.role << Theme::RESET
				<< " | " << Theme::YELLOW << exp.company << Theme::RESET
				<< " (" << Theme::GRAY << exp.duration << Theme::RESET << ")\n";
			for (const auto& bullet : exp.bullets) {
				printBullet(bullet);
			}
		}

		for (const auto& exp : work_history4) {
			std::cout << "  " << Theme::BOLD << exp.role << Theme::RESET
				<< " | " << Theme::YELLOW << exp.company << Theme::RESET
				<< " (" << Theme::GRAY << exp.duration << Theme::RESET << ")\n";
			for (const auto& bullet : exp.bullets) {
				printBullet(bullet);
			}
		}

		for (const auto& exp : work_history3) {
			std::cout << "  " << Theme::BOLD << exp.role << Theme::RESET
				<< " | " << Theme::YELLOW << exp.company << Theme::RESET
				<< " (" << Theme::GRAY << exp.duration << Theme::RESET << ")\n";
			for (const auto& bullet : exp.bullets) {
				printBullet(bullet);
			}
		}

		for (const auto& exp : work_history2) {
			std::cout << "  " << Theme::BOLD << exp.role << Theme::RESET
				<< " | " << Theme::YELLOW << exp.company << Theme::RESET
				<< " (" << Theme::GRAY << exp.duration << Theme::RESET << ")\n";
			for (const auto& bullet : exp.bullets) {
				printBullet(bullet);
			}
		}

		// --- Key Projects ---
		printSectionHeader("PROJECTS");
		for (const auto& proj : portfolio) {
			std::cout << "  " << Theme::BOLD << proj.name << Theme::RESET
				<< " [" << Theme::BLUE << proj.tech_stack << Theme::RESET << "]\n";
			std::cout << "    " << Theme::GRAY << proj.description << Theme::RESET << "\n";
			std::cout << "    " << Theme::GRAY << proj.description2 << Theme::RESET << "\n";
			std::cout << "    " << Theme::GRAY << proj.description3 << Theme::RESET << "\n\n";
		}

		// --- Education ---
		printSectionHeader("EDUCATION");
		for (const auto& edu : academia) {
			std::cout << "  " << Theme::BOLD << edu.degree << Theme::RESET << "\n"
				<< "    " << edu.school << " (" << Theme::GRAY << edu.graduation << Theme::RESET << ")\n";
		}
		std::cout << "\n";
	}
};

int main() {
	// Instantiate and execute the resume presentation pipeline
	SetConsoleOutputCP(CP_UTF8);
	Resume resume;
	resume.display();
	return 0;
}