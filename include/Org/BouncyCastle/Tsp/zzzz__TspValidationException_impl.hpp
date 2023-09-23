#pragma once
#include "Org/BouncyCastle/Tsp/zzzz__TspException_impl.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TspValidationException_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Tsp::TspValidationException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Tsp::TspValidationException::*)(::StringW)>(&Org::BouncyCastle::Tsp::TspValidationException::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10c4e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Tsp::TspValidationException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Tsp::TspValidationException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Tsp::TspValidationException::*)(::StringW, int32_t)>(&Org::BouncyCastle::Tsp::TspValidationException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x10c39b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Tsp::TspValidationException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Tsp::TspValidationException.get_FailureCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Tsp::TspValidationException::*)()>(&Org::BouncyCastle::Tsp::TspValidationException::get_FailureCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10caca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Tsp::TspValidationException>::get(),
                            "get_FailureCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Tsp::TspValidationException::__set_failureCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Tsp::TspValidationException::__get_failureCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
 Org::BouncyCastle::Tsp::TspValidationException::TspValidationException(::StringW message)  : Org::BouncyCastle::Tsp::TspException(THROW_UNLESS(::il2cpp_utils::New<TspValidationException>(message))) {}
 void Org::BouncyCastle::Tsp::TspValidationException::_ctor(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Tsp::TspValidationException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "failureCode", ty: "int32_t", modifiers: "", def_value: None }]
 Org::BouncyCastle::Tsp::TspValidationException::TspValidationException(::StringW message, int32_t failureCode)  : Org::BouncyCastle::Tsp::TspException(THROW_UNLESS(::il2cpp_utils::New<TspValidationException>(message, failureCode))) {}
 void Org::BouncyCastle::Tsp::TspValidationException::_ctor(::StringW message, int32_t failureCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Tsp::TspValidationException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message, failureCode);
}
 int32_t Org::BouncyCastle::Tsp::TspValidationException::get_FailureCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Tsp::TspValidationException>::get(),
                            "get_FailureCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
