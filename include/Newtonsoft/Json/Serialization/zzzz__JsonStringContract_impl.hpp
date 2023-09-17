#pragma once
#include "Newtonsoft/Json/Serialization/zzzz__JsonPrimitiveContract_impl.hpp"
namespace {
#include "Newtonsoft/Json/Serialization/zzzz__JsonStringContract_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonStringContract._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonStringContract::*)(::System::Type)>(&::Newtonsoft::Json::Serialization::JsonStringContract::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2516110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonStringContract>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "underlyingType", ty: "::System::Type", modifiers: "", def_value: None }]
 ::Newtonsoft::Json::Serialization::JsonStringContract::JsonStringContract(::System::Type underlyingType)  : ::Newtonsoft::Json::Serialization::JsonPrimitiveContract(THROW_UNLESS(::il2cpp_utils::New<JsonStringContract>(underlyingType))) {}
 void ::Newtonsoft::Json::Serialization::JsonStringContract::_ctor(::System::Type underlyingType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonStringContract>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, underlyingType);
}
} // end anonymous namespace
