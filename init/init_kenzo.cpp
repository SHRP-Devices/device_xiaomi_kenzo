#include <stdlib.h>

#include <android-base/properties.h>
#include "property_service.h"
#include <android-base/logging.h>

using android::base::GetProperty;
using android::init::property_set;

namespace android {
namespace init {

void vendor_load_properties()
{

	std::string boardID = GetProperty("ro.boot.boardID", "");

	/* Redmi Note 3 Special Edition */
	if ( boardID == "0" ) {
		property_set("ro.product.model", "Redmi Note 3 Special Edition");
		property_set("ro.product.device", "kate");
	}

	/* default to Redmi Note 3 */
	else {
		property_set("ro.product.model", "Redmi Note 3");
		property_set("ro.product.device", "kenzo");
	}
}

}  // namespace init
}  // namespace android 
