#pragma once
namespace {
#include "System/Threading/zzzz__Timeout_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
 void ::System::Threading::Timeout::__set_InfiniteTimeSpan(::System::TimeSpan value)  {
::cordl_internals::setStaticField<::System::TimeSpan, "InfiniteTimeSpan", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timeout>::get>(std::forward<::System::TimeSpan>(value));
}
 ::System::TimeSpan ::System::Threading::Timeout::__get_InfiniteTimeSpan()  {
return ::cordl_internals::getStaticField<::System::TimeSpan, "InfiniteTimeSpan", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timeout>::get>();
}
} // end anonymous namespace
