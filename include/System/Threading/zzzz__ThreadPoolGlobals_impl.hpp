#pragma once
namespace {
#include "System/Threading/zzzz__ThreadPoolGlobals_def.hpp"
#include "System/Threading/zzzz__ThreadPoolWorkQueue_def.hpp"
 void ::System::Threading::ThreadPoolGlobals::__set_processorCount(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "processorCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolGlobals>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Threading::ThreadPoolGlobals::__get_processorCount()  {
return ::cordl_internals::getStaticField<int32_t, "processorCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolGlobals>::get>();
}
 void ::System::Threading::ThreadPoolGlobals::__set_vmTpInitialized(bool value)  {
::cordl_internals::setStaticField<bool, "vmTpInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolGlobals>::get>(std::forward<bool>(value));
}
 bool ::System::Threading::ThreadPoolGlobals::__get_vmTpInitialized()  {
return ::cordl_internals::getStaticField<bool, "vmTpInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolGlobals>::get>();
}
 void ::System::Threading::ThreadPoolGlobals::__set_enableWorkerTracking(bool value)  {
::cordl_internals::setStaticField<bool, "enableWorkerTracking", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolGlobals>::get>(std::forward<bool>(value));
}
 bool ::System::Threading::ThreadPoolGlobals::__get_enableWorkerTracking()  {
return ::cordl_internals::getStaticField<bool, "enableWorkerTracking", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolGlobals>::get>();
}
 void ::System::Threading::ThreadPoolGlobals::__set_workQueue(::System::Threading::ThreadPoolWorkQueue value)  {
::cordl_internals::setStaticField<::System::Threading::ThreadPoolWorkQueue, "workQueue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolGlobals>::get>(std::forward<::System::Threading::ThreadPoolWorkQueue>(value));
}
 ::System::Threading::ThreadPoolWorkQueue ::System::Threading::ThreadPoolGlobals::__get_workQueue()  {
return ::cordl_internals::getStaticField<::System::Threading::ThreadPoolWorkQueue, "workQueue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolGlobals>::get>();
}
} // end anonymous namespace
