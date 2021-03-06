// Generated by binpac_quickstart

#include "plugin/Plugin.h"

#include "MQTT.h"

namespace plugin {
namespace Bro_MQTT {

class Plugin : public plugin::Plugin {
public:
	plugin::Configuration Configure()
		{
		AddComponent(new ::analyzer::Component("MQTT",
		             ::analyzer::MQTT::MQTT_Analyzer::InstantiateAnalyzer));

		plugin::Configuration config;
		config.name = "Bro::MQTT";
		config.description = "Message Queuing Telemetry Transport Protocol";
		return config;
		}
} plugin;

}
}
