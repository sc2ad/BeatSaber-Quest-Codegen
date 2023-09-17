#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "UnityEngine/Timeline/zzzz__SupportsChildTracksAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::SupportsChildTracksAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::SupportsChildTracksAttribute::*)(::System::Type, int32_t)>(&::UnityEngine::Timeline::SupportsChildTracksAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ad5dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SupportsChildTracksAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::Timeline::SupportsChildTracksAttribute::__set_childType(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::UnityEngine::Timeline::SupportsChildTracksAttribute::__get_childType() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::SupportsChildTracksAttribute::__set_levels(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Timeline::SupportsChildTracksAttribute::__get_levels() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "childType", ty: "::System::Type", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levels", ty: "int32_t", modifiers: "", def_value: Some("2147483647") }]
 ::UnityEngine::Timeline::SupportsChildTracksAttribute::SupportsChildTracksAttribute(::System::Type childType, int32_t levels)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<SupportsChildTracksAttribute>(childType, levels))) {}
/// @param childType: ::System::Type (default: csnull)
/// @param levels: int32_t (default: 2147483647)
 void ::UnityEngine::Timeline::SupportsChildTracksAttribute::_ctor(::System::Type childType, int32_t levels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SupportsChildTracksAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, childType, levels);
}
} // end anonymous namespace
