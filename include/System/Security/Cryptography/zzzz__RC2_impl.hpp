#pragma once
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__RC2_def.hpp"
#include "System/Security/Cryptography/zzzz__KeySizes_def.hpp"
//  Writing Method size for method: System::Security::Cryptography::RC2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RC2::*)()>(&System::Security::Cryptography::RC2::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22f4df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::RC2.get_EffectiveKeySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Security::Cryptography::RC2::*)()>(&System::Security::Cryptography::RC2::get_EffectiveKeySize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22f4e70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::RC2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::RC2.get_KeySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Security::Cryptography::RC2::*)()>(&System::Security::Cryptography::RC2::get_KeySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f4e8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::RC2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::RC2.set_KeySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RC2::*)(int32_t)>(&System::Security::Cryptography::RC2::set_KeySize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22f4e94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::RC2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
constexpr void System::Security::Cryptography::RC2::__set_EffectiveKeySizeValue(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::RC2::__get_EffectiveKeySizeValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Security::Cryptography::RC2::__set_s_legalBlockSizes(::ArrayW<System::Security::Cryptography::KeySizes> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Security::Cryptography::KeySizes>, "s_legalBlockSizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2>::get>(std::forward<::ArrayW<System::Security::Cryptography::KeySizes>>(value));
}
 ::ArrayW<System::Security::Cryptography::KeySizes> System::Security::Cryptography::RC2::__get_s_legalBlockSizes()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Security::Cryptography::KeySizes>, "s_legalBlockSizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2>::get>();
}
 void System::Security::Cryptography::RC2::__set_s_legalKeySizes(::ArrayW<System::Security::Cryptography::KeySizes> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Security::Cryptography::KeySizes>, "s_legalKeySizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2>::get>(std::forward<::ArrayW<System::Security::Cryptography::KeySizes>>(value));
}
 ::ArrayW<System::Security::Cryptography::KeySizes> System::Security::Cryptography::RC2::__get_s_legalKeySizes()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Security::Cryptography::KeySizes>, "s_legalKeySizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2>::get>();
}
 System::Security::Cryptography::RC2 System::Security::Cryptography::RC2::New_ctor()  {
System::Security::Cryptography::RC2 o{THROW_UNLESS(::il2cpp_utils::New<System::Security::Cryptography::RC2>())};
return o;
}
 void System::Security::Cryptography::RC2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Security::Cryptography::RC2::get_EffectiveKeySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2>::get(),
                            "get_EffectiveKeySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Security::Cryptography::RC2::get_KeySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2>::get(),
                            "get_KeySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::Cryptography::RC2::set_KeySize(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2>::get(),
                            "set_KeySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
