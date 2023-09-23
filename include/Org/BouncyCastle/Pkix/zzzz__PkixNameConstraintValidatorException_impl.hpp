#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixNameConstraintValidatorException_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException::*)(::StringW)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x107ee24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "msg", ty: "::StringW", modifiers: "", def_value: None }]
 Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException::PkixNameConstraintValidatorException(::StringW msg)  : System::Exception(THROW_UNLESS(::il2cpp_utils::New<PkixNameConstraintValidatorException>(msg))) {}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException::_ctor(::StringW msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
