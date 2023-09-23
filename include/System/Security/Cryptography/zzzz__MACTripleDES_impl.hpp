#pragma once
#include "System/Security/Cryptography/zzzz__KeyedHashAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__MACTripleDES_def.hpp"
#include "System/Security/Cryptography/zzzz__TailStream_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__TripleDES_def.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStream_def.hpp"
//  Writing Method size for method: System::Security::Cryptography::MACTripleDES._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::MACTripleDES::*)()>(&System::Security::Cryptography::MACTripleDES::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x22f4218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::MACTripleDES>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::MACTripleDES.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::MACTripleDES::*)()>(&System::Security::Cryptography::MACTripleDES::Initialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f4348;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::MACTripleDES),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::MACTripleDES>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::MACTripleDES.HashCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::MACTripleDES::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Security::Cryptography::MACTripleDES::HashCore)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22f4350;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::MACTripleDES),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::MACTripleDES>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::MACTripleDES.HashFinal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::MACTripleDES::*)()>(&System::Security::Cryptography::MACTripleDES::HashFinal)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x22f4550;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::MACTripleDES),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::MACTripleDES>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::MACTripleDES.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::MACTripleDES::*)(bool)>(&System::Security::Cryptography::MACTripleDES::Dispose)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x22f4714;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::MACTripleDES),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::MACTripleDES>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
constexpr void System::Security::Cryptography::MACTripleDES::__set_m_encryptor(System::Security::Cryptography::ICryptoTransform value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::ICryptoTransform, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::ICryptoTransform>(value));
}
constexpr System::Security::Cryptography::ICryptoTransform System::Security::Cryptography::MACTripleDES::__get_m_encryptor() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::ICryptoTransform, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::MACTripleDES::__set__cs(System::Security::Cryptography::CryptoStream value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::CryptoStream, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::CryptoStream>(value));
}
constexpr System::Security::Cryptography::CryptoStream System::Security::Cryptography::MACTripleDES::__get__cs() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::CryptoStream, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::MACTripleDES::__set__ts(System::Security::Cryptography::TailStream value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::TailStream, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::TailStream>(value));
}
constexpr System::Security::Cryptography::TailStream System::Security::Cryptography::MACTripleDES::__get__ts() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::TailStream, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::MACTripleDES::__set_m_bytesPerBlock(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::MACTripleDES::__get_m_bytesPerBlock() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::MACTripleDES::__set_des(System::Security::Cryptography::TripleDES value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::TripleDES, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::TripleDES>(value));
}
constexpr System::Security::Cryptography::TripleDES System::Security::Cryptography::MACTripleDES::__get_des() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::TripleDES, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Security::Cryptography::MACTripleDES::MACTripleDES()  : System::Security::Cryptography::KeyedHashAlgorithm(THROW_UNLESS(::il2cpp_utils::New<MACTripleDES>())) {}
 void System::Security::Cryptography::MACTripleDES::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::MACTripleDES>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::Cryptography::MACTripleDES::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::MACTripleDES>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::Cryptography::MACTripleDES::HashCore(::ArrayW<uint8_t> rgbData, int32_t ibStart, int32_t cbSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::MACTripleDES>::get(),
                            "HashCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rgbData, ibStart, cbSize);
}
 ::ArrayW<uint8_t> System::Security::Cryptography::MACTripleDES::HashFinal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::MACTripleDES>::get(),
                            "HashFinal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::Cryptography::MACTripleDES::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::MACTripleDES>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
