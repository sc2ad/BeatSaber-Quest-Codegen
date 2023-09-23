#pragma once
#include "System/Globalization/zzzz__GlobalizationMode_def.hpp"
//  Writing Method size for method: System::Globalization::GlobalizationMode.get_Invariant
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Globalization::GlobalizationMode::get_Invariant)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23ee4ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::GlobalizationMode>::get(),
                            "get_Invariant",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::GlobalizationMode.GetGlobalizationInvariantMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Globalization::GlobalizationMode::GetGlobalizationInvariantMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ee544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::GlobalizationMode>::get(),
                            "GetGlobalizationInvariantMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Globalization::GlobalizationMode::__set__Invariant_k__BackingField(bool value)  {
::cordl_internals::setStaticField<bool, "<Invariant>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::GlobalizationMode>::get>(std::forward<bool>(value));
}
 bool System::Globalization::GlobalizationMode::__get__Invariant_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<Invariant>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::GlobalizationMode>::get>();
}
 bool System::Globalization::GlobalizationMode::get_Invariant()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::GlobalizationMode>::get(),
                            "get_Invariant",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool System::Globalization::GlobalizationMode::GetGlobalizationInvariantMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::GlobalizationMode>::get(),
                            "GetGlobalizationInvariantMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
