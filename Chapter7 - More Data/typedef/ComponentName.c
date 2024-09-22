#include "ComponentName.h"
#include "ComponentName2.h"

EFI_COMPONENT_NAME_PROTOCOL name = {

	(EFI_COMPONENT_NAME_GET_DRIVER_NAME) ComponentName;

};

EFI_COMPONENT_NAME2_PROTOCOL names = {



}