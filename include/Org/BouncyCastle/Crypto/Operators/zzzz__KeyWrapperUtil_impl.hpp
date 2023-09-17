#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Operators/zzzz__KeyWrapperUtil_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyWrapper_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyUnwrapper_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil.WrapperForName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IKeyWrapper (*)(::StringW, ::Org::BouncyCastle::Crypto::ICipherParameters)>(&::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::WrapperForName)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xe9b734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil>::get(),
                            "WrapperForName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil.UnwrapperForName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IKeyUnwrapper (*)(::StringW, ::Org::BouncyCastle::Crypto::ICipherParameters)>(&::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::UnwrapperForName)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xe9bf58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil>::get(),
                            "UnwrapperForName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::*)()>(&::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe9c190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::__set_providerMap(::System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<::System::Collections::IDictionary, "providerMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil>::get>(std::forward<::System::Collections::IDictionary>(value));
}
 ::System::Collections::IDictionary ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::__get_providerMap()  {
return ::cordl_internals::getStaticField<::System::Collections::IDictionary, "providerMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil>::get>();
}
 ::Org::BouncyCastle::Crypto::IKeyWrapper ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::WrapperForName(::StringW algorithm, ::Org::BouncyCastle::Crypto::ICipherParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil>::get(),
                            "WrapperForName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IKeyWrapper, false>(nullptr, ___internal_method, algorithm, parameters);
}
 ::Org::BouncyCastle::Crypto::IKeyUnwrapper ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::UnwrapperForName(::StringW algorithm, ::Org::BouncyCastle::Crypto::ICipherParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil>::get(),
                            "UnwrapperForName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IKeyUnwrapper, false>(nullptr, ___internal_method, algorithm, parameters);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::KeyWrapperUtil()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<KeyWrapperUtil>())) {}
 void ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
