#pragma once
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonLinqContract_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonLinqContract._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonLinqContract::*)(System::Type)>(&Newtonsoft::Json::Serialization::JsonLinqContract::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24f6170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonLinqContract>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "underlyingType", ty: "System::Type", modifiers: "", def_value: None }]
 Newtonsoft::Json::Serialization::JsonLinqContract::JsonLinqContract(System::Type underlyingType)  : Newtonsoft::Json::Serialization::JsonContract(THROW_UNLESS(::il2cpp_utils::New<JsonLinqContract>(underlyingType))) {}
 void Newtonsoft::Json::Serialization::JsonLinqContract::_ctor(System::Type underlyingType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonLinqContract>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, underlyingType);
}
