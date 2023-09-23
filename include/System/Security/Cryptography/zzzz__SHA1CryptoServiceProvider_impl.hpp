#pragma once
#include "System/Security/Cryptography/zzzz__SHA1_impl.hpp"
#include "System/Security/Cryptography/zzzz__SHA1CryptoServiceProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__SHA1Internal_def.hpp"
//  Writing Method size for method: System::Security::Cryptography::SHA1CryptoServiceProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA1CryptoServiceProvider::*)()>(&System::Security::Cryptography::SHA1CryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2303294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::SHA1CryptoServiceProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::SHA1CryptoServiceProvider.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA1CryptoServiceProvider::*)()>(&System::Security::Cryptography::SHA1CryptoServiceProvider::Finalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2309588;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::SHA1CryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::SHA1CryptoServiceProvider>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::SHA1CryptoServiceProvider.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA1CryptoServiceProvider::*)(bool)>(&System::Security::Cryptography::SHA1CryptoServiceProvider::Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2309628;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::SHA1CryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::SHA1CryptoServiceProvider>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::SHA1CryptoServiceProvider.HashCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA1CryptoServiceProvider::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Security::Cryptography::SHA1CryptoServiceProvider::HashCore)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2309634;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::SHA1CryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::SHA1CryptoServiceProvider>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::SHA1CryptoServiceProvider.HashFinal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::SHA1CryptoServiceProvider::*)()>(&System::Security::Cryptography::SHA1CryptoServiceProvider::HashFinal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2309658;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::SHA1CryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::SHA1CryptoServiceProvider>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::SHA1CryptoServiceProvider.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA1CryptoServiceProvider::*)()>(&System::Security::Cryptography::SHA1CryptoServiceProvider::Initialize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2309678;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::SHA1CryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::SHA1CryptoServiceProvider>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
constexpr void System::Security::Cryptography::SHA1CryptoServiceProvider::__set_sha(System::Security::Cryptography::SHA1Internal value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::SHA1Internal, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::SHA1Internal>(value));
}
constexpr System::Security::Cryptography::SHA1Internal System::Security::Cryptography::SHA1CryptoServiceProvider::__get_sha() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::SHA1Internal, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Security::Cryptography::SHA1CryptoServiceProvider::SHA1CryptoServiceProvider()  : System::Security::Cryptography::SHA1(THROW_UNLESS(::il2cpp_utils::New<SHA1CryptoServiceProvider>())) {}
 void System::Security::Cryptography::SHA1CryptoServiceProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::SHA1CryptoServiceProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::Cryptography::SHA1CryptoServiceProvider::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::SHA1CryptoServiceProvider>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::Cryptography::SHA1CryptoServiceProvider::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::SHA1CryptoServiceProvider>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void System::Security::Cryptography::SHA1CryptoServiceProvider::HashCore(::ArrayW<uint8_t> rgb, int32_t ibStart, int32_t cbSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::SHA1CryptoServiceProvider>::get(),
                            "HashCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rgb, ibStart, cbSize);
}
 ::ArrayW<uint8_t> System::Security::Cryptography::SHA1CryptoServiceProvider::HashFinal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::SHA1CryptoServiceProvider>::get(),
                            "HashFinal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::Cryptography::SHA1CryptoServiceProvider::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::SHA1CryptoServiceProvider>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
