#pragma once
#include "System/Security/Cryptography/zzzz__HashAlgorithm_impl.hpp"
namespace {
#include "System/Security/Cryptography/zzzz__KeyedHashAlgorithm_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::KeyedHashAlgorithm._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::KeyedHashAlgorithm::*)()>(&::System::Security::Cryptography::KeyedHashAlgorithm::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f374c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::KeyedHashAlgorithm>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::KeyedHashAlgorithm.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::KeyedHashAlgorithm::*)(bool)>(&::System::Security::Cryptography::KeyedHashAlgorithm::Dispose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22f36f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::KeyedHashAlgorithm),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::KeyedHashAlgorithm>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::KeyedHashAlgorithm.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::KeyedHashAlgorithm::*)()>(&::System::Security::Cryptography::KeyedHashAlgorithm::get_Key)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22f4094;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::KeyedHashAlgorithm),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::KeyedHashAlgorithm>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::KeyedHashAlgorithm.set_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::KeyedHashAlgorithm::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::KeyedHashAlgorithm::set_Key)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x22f410c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::KeyedHashAlgorithm),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::KeyedHashAlgorithm>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Security::Cryptography::KeyedHashAlgorithm::__set_KeyValue(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::Security::Cryptography::KeyedHashAlgorithm::__get_KeyValue() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Security::Cryptography::KeyedHashAlgorithm::KeyedHashAlgorithm()  : ::System::Security::Cryptography::HashAlgorithm(THROW_UNLESS(::il2cpp_utils::New<KeyedHashAlgorithm>())) {}
 void ::System::Security::Cryptography::KeyedHashAlgorithm::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::KeyedHashAlgorithm>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Security::Cryptography::KeyedHashAlgorithm::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::KeyedHashAlgorithm>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 ::ArrayW<uint8_t> ::System::Security::Cryptography::KeyedHashAlgorithm::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::KeyedHashAlgorithm>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Security::Cryptography::KeyedHashAlgorithm::set_Key(::ArrayW<uint8_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::KeyedHashAlgorithm>::get(),
                            "set_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
} // end anonymous namespace
