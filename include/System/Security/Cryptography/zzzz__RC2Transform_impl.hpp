#pragma once
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_impl.hpp"
#include "System/Security/Cryptography/zzzz__RC2Transform_def.hpp"
#include "System/Security/Cryptography/zzzz__RC2_def.hpp"
//  Writing Method size for method: System::Security::Cryptography::RC2Transform._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RC2Transform::*)(System::Security::Cryptography::RC2, bool, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&System::Security::Cryptography::RC2Transform::_ctor)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x2306b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2Transform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::RC2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::RC2Transform.ECB
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RC2Transform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&System::Security::Cryptography::RC2Transform::ECB)> {
  constexpr static std::size_t size = 0x930;
  constexpr static std::size_t addrs = 0x23070cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::RC2Transform),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2Transform>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
constexpr void System::Security::Cryptography::RC2Transform::__set_R0(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::Security::Cryptography::RC2Transform::__get_R0() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::RC2Transform::__set_R1(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x5a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::Security::Cryptography::RC2Transform::__get_R1() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x5a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::RC2Transform::__set_R2(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::Security::Cryptography::RC2Transform::__get_R2() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::RC2Transform::__set_R3(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x5e>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::Security::Cryptography::RC2Transform::__get_R3() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x5e>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::RC2Transform::__set_K(::ArrayW<uint16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint16_t>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint16_t>>(value));
}
constexpr ::ArrayW<uint16_t> System::Security::Cryptography::RC2Transform::__get_K() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint16_t>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::RC2Transform::__set_j(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::RC2Transform::__get_j() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Security::Cryptography::RC2Transform::__set_pitable(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "pitable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2Transform>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> System::Security::Cryptography::RC2Transform::__get_pitable()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "pitable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2Transform>::get>();
}
// Ctor Parameters [CppParam { name: "rc2Algo", ty: "System::Security::Cryptography::RC2", modifiers: "", def_value: None }, CppParam { name: "encryption", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "iv", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 System::Security::Cryptography::RC2Transform::RC2Transform(System::Security::Cryptography::RC2 rc2Algo, bool encryption, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv)  : Mono::Security::Cryptography::SymmetricTransform(THROW_UNLESS(::il2cpp_utils::New<RC2Transform>(rc2Algo, encryption, key, iv))) {}
 void System::Security::Cryptography::RC2Transform::_ctor(System::Security::Cryptography::RC2 rc2Algo, bool encryption, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2Transform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::RC2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rc2Algo, encryption, key, iv);
}
 void System::Security::Cryptography::RC2Transform::ECB(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2Transform>::get(),
                            "ECB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input, output);
}
