#pragma once
namespace {
#include "System/Threading/zzzz__PlatformHelper_def.hpp"
//  Writing Method size for method: ::System::Threading::PlatformHelper.get_ProcessorCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Threading::PlatformHelper::get_ProcessorCount)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x24a4e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::PlatformHelper>::get(),
                            "get_ProcessorCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::System::Threading::PlatformHelper::__set_s_processorCount(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_processorCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::PlatformHelper>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Threading::PlatformHelper::__get_s_processorCount()  {
return ::cordl_internals::getStaticField<int32_t, "s_processorCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::PlatformHelper>::get>();
}
 void ::System::Threading::PlatformHelper::__set_s_lastProcessorCountRefreshTicks(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_lastProcessorCountRefreshTicks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::PlatformHelper>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Threading::PlatformHelper::__get_s_lastProcessorCountRefreshTicks()  {
return ::cordl_internals::getStaticField<int32_t, "s_lastProcessorCountRefreshTicks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::PlatformHelper>::get>();
}
 void ::System::Threading::PlatformHelper::__set_IsSingleProcessor(bool value)  {
::cordl_internals::setStaticField<bool, "IsSingleProcessor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::PlatformHelper>::get>(std::forward<bool>(value));
}
 bool ::System::Threading::PlatformHelper::__get_IsSingleProcessor()  {
return ::cordl_internals::getStaticField<bool, "IsSingleProcessor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::PlatformHelper>::get>();
}
 int32_t ::System::Threading::PlatformHelper::get_ProcessorCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::PlatformHelper>::get(),
                            "get_ProcessorCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
