#pragma once
#include "Org/BouncyCastle/X509/Store/zzzz__X509StoreFactory_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509StoreParameters_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::X509::Store::X509StoreFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::Store::X509StoreFactory::*)()>(&Org::BouncyCastle::X509::Store::X509StoreFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10e754c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Store::X509StoreFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::Store::X509StoreFactory.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::Store::IX509Store (*)(::StringW, Org::BouncyCastle::X509::Store::IX509StoreParameters)>(&Org::BouncyCastle::X509::Store::X509StoreFactory::Create)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x10e7554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Store::X509StoreFactory>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::Store::IX509StoreParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::Store::X509StoreFactory.checkCorrectType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::ICollection, System::Type)>(&Org::BouncyCastle::X509::Store::X509StoreFactory::checkCorrectType)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x10e790c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Store::X509StoreFactory>::get(),
                            "checkCorrectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
 Org::BouncyCastle::X509::Store::X509StoreFactory Org::BouncyCastle::X509::Store::X509StoreFactory::New_ctor()  {
Org::BouncyCastle::X509::Store::X509StoreFactory o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::X509::Store::X509StoreFactory>())};
return o;
}
 void Org::BouncyCastle::X509::Store::X509StoreFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Store::X509StoreFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::X509::Store::IX509Store Org::BouncyCastle::X509::Store::X509StoreFactory::Create(::StringW type, Org::BouncyCastle::X509::Store::IX509StoreParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Store::X509StoreFactory>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::Store::IX509StoreParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::X509::Store::IX509Store, false>(nullptr, ___internal_method, type, parameters);
}
 void Org::BouncyCastle::X509::Store::X509StoreFactory::checkCorrectType(System::Collections::ICollection coll, System::Type t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Store::X509StoreFactory>::get(),
                            "checkCorrectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, coll, t);
}
