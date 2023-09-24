#pragma once
#include "UnityEngine/Profiling/Memory/Experimental/zzzz__MetaData_def.hpp"
//  Writing Method size for method: UnityEngine::Profiling::Memory::Experimental::MetaData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Profiling::Memory::Experimental::MetaData::*)()>(&UnityEngine::Profiling::Memory::Experimental::MetaData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b6ea8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Profiling::Memory::Experimental::MetaData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Profiling::Memory::Experimental::MetaData::__set_content(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::Profiling::Memory::Experimental::MetaData::__get_content() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Profiling::Memory::Experimental::MetaData::__set_platform(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::Profiling::Memory::Experimental::MetaData::__get_platform() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Profiling::Memory::Experimental::MetaData UnityEngine::Profiling::Memory::Experimental::MetaData::New_ctor()  {
UnityEngine::Profiling::Memory::Experimental::MetaData o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::Profiling::Memory::Experimental::MetaData>())};
return o;
}
 void UnityEngine::Profiling::Memory::Experimental::MetaData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Profiling::Memory::Experimental::MetaData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
