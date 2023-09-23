#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "Mono/zzzz__MonoAssemblyName_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr Mono::Mono__MonoAssemblyName___public_key_token_e__FixedBuffer::Mono__MonoAssemblyName___public_key_token_e__FixedBuffer(uint8_t FixedElementField) noexcept : ::bs_hook::ValueTypeWrapper() {this->FixedElementField = FixedElementField;
}
constexpr void Mono::Mono__MonoAssemblyName___public_key_token_e__FixedBuffer::__set_FixedElementField(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t Mono::Mono__MonoAssemblyName___public_key_token_e__FixedBuffer::__get_FixedElementField() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
// Ctor Parameters [CppParam { name: "name", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "culture", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hash_value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "public_key", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "public_key_token", ty: "Mono::Mono__MonoAssemblyName___public_key_token_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "hash_alg", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hash_len", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "major", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minor", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "build", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "revision", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "arch", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr Mono::MonoAssemblyName::MonoAssemblyName(::cordl_internals::intptr_t name, ::cordl_internals::intptr_t culture, ::cordl_internals::intptr_t hash_value, ::cordl_internals::intptr_t public_key, Mono::Mono__MonoAssemblyName___public_key_token_e__FixedBuffer public_key_token, uint32_t hash_alg, uint32_t hash_len, uint32_t flags, uint16_t major, uint16_t minor, uint16_t build, uint16_t revision, uint16_t arch) noexcept : ::bs_hook::ValueTypeWrapper() {this->name = name;
this->culture = culture;
this->hash_value = hash_value;
this->public_key = public_key;
this->public_key_token = public_key_token;
this->hash_alg = hash_alg;
this->hash_len = hash_len;
this->flags = flags;
this->major = major;
this->minor = minor;
this->build = build;
this->revision = revision;
this->arch = arch;
}
constexpr void Mono::MonoAssemblyName::__set_name(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t Mono::MonoAssemblyName::__get_name() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
constexpr void Mono::MonoAssemblyName::__set_culture(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t Mono::MonoAssemblyName::__get_culture() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance);
}
constexpr void Mono::MonoAssemblyName::__set_hash_value(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t Mono::MonoAssemblyName::__get_hash_value() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->__instance);
}
constexpr void Mono::MonoAssemblyName::__set_public_key(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t Mono::MonoAssemblyName::__get_public_key() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance);
}
constexpr void Mono::MonoAssemblyName::__set_public_key_token(Mono::Mono__MonoAssemblyName___public_key_token_e__FixedBuffer value)  {
::cordl_internals::setInstanceField<Mono::Mono__MonoAssemblyName___public_key_token_e__FixedBuffer, 0x20>(this->__instance, std::forward<Mono::Mono__MonoAssemblyName___public_key_token_e__FixedBuffer>(value));
}
constexpr Mono::Mono__MonoAssemblyName___public_key_token_e__FixedBuffer Mono::MonoAssemblyName::__get_public_key_token() const {
return ::cordl_internals::getInstanceField<Mono::Mono__MonoAssemblyName___public_key_token_e__FixedBuffer, 0x20>(this->__instance);
}
constexpr void Mono::MonoAssemblyName::__set_hash_alg(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x34>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t Mono::MonoAssemblyName::__get_hash_alg() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x34>(this->__instance);
}
constexpr void Mono::MonoAssemblyName::__set_hash_len(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x38>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t Mono::MonoAssemblyName::__get_hash_len() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x38>(this->__instance);
}
constexpr void Mono::MonoAssemblyName::__set_flags(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x3c>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t Mono::MonoAssemblyName::__get_flags() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x3c>(this->__instance);
}
constexpr void Mono::MonoAssemblyName::__set_major(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x40>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t Mono::MonoAssemblyName::__get_major() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x40>(this->__instance);
}
constexpr void Mono::MonoAssemblyName::__set_minor(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x42>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t Mono::MonoAssemblyName::__get_minor() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x42>(this->__instance);
}
constexpr void Mono::MonoAssemblyName::__set_build(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x44>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t Mono::MonoAssemblyName::__get_build() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x44>(this->__instance);
}
constexpr void Mono::MonoAssemblyName::__set_revision(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x46>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t Mono::MonoAssemblyName::__get_revision() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x46>(this->__instance);
}
constexpr void Mono::MonoAssemblyName::__set_arch(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x48>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t Mono::MonoAssemblyName::__get_arch() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x48>(this->__instance);
}
