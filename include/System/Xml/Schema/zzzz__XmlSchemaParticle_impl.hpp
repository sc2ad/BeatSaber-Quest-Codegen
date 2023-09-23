#pragma once
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs::System__Xml__Schema__XmlSchemaParticle__Occurs(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs  System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs::None{0};
constexpr System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs  System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs::Min{1};
constexpr System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs  System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs::Max{2};
//  Writing Method size for method: System::Xml::Schema::XmlSchemaParticle.set_MinOccurs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaParticle::*)(System::Decimal)>(&System::Xml::Schema::XmlSchemaParticle::set_MinOccurs)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2733f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlSchemaParticle>::get(),
                            "set_MinOccurs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlSchemaParticle.set_MaxOccurs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaParticle::*)(System::Decimal)>(&System::Xml::Schema::XmlSchemaParticle::set_MaxOccurs)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2734090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlSchemaParticle>::get(),
                            "set_MaxOccurs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlSchemaParticle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaParticle::*)()>(&System::Xml::Schema::XmlSchemaParticle::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x273385c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlSchemaParticle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::Schema::XmlSchemaParticle::__set_minOccurs(System::Decimal value)  {
::cordl_internals::setInstanceField<System::Decimal, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Decimal>(value));
}
constexpr System::Decimal System::Xml::Schema::XmlSchemaParticle::__get_minOccurs() const {
return ::cordl_internals::getInstanceField<System::Decimal, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::XmlSchemaParticle::__set_maxOccurs(System::Decimal value)  {
::cordl_internals::setInstanceField<System::Decimal, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Decimal>(value));
}
constexpr System::Decimal System::Xml::Schema::XmlSchemaParticle::__get_maxOccurs() const {
return ::cordl_internals::getInstanceField<System::Decimal, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::XmlSchemaParticle::__set_flags(System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs value)  {
::cordl_internals::setInstanceField<System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs>(value));
}
constexpr System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs System::Xml::Schema::XmlSchemaParticle::__get_flags() const {
return ::cordl_internals::getInstanceField<System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__Occurs, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Xml::Schema::XmlSchemaParticle::__set_Empty(System::Xml::Schema::XmlSchemaParticle value)  {
::cordl_internals::setStaticField<System::Xml::Schema::XmlSchemaParticle, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlSchemaParticle>::get>(std::forward<System::Xml::Schema::XmlSchemaParticle>(value));
}
 System::Xml::Schema::XmlSchemaParticle System::Xml::Schema::XmlSchemaParticle::__get_Empty()  {
return ::cordl_internals::getStaticField<System::Xml::Schema::XmlSchemaParticle, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlSchemaParticle>::get>();
}
 void System::Xml::Schema::XmlSchemaParticle::set_MinOccurs(System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlSchemaParticle>::get(),
                            "set_MinOccurs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Xml::Schema::XmlSchemaParticle::set_MaxOccurs(System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlSchemaParticle>::get(),
                            "set_MaxOccurs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 System::Xml::Schema::XmlSchemaParticle::XmlSchemaParticle()  : System::Xml::Schema::XmlSchemaAnnotated(THROW_UNLESS(::il2cpp_utils::New<XmlSchemaParticle>())) {}
 void System::Xml::Schema::XmlSchemaParticle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlSchemaParticle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__EmptyParticle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__EmptyParticle::*)()>(&System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__EmptyParticle::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x27353e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__EmptyParticle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__EmptyParticle::System__Xml__Schema__XmlSchemaParticle__EmptyParticle()  : System::Xml::Schema::XmlSchemaParticle(THROW_UNLESS(::il2cpp_utils::New<System__Xml__Schema__XmlSchemaParticle__EmptyParticle>())) {}
 void System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__EmptyParticle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::System__Xml__Schema__XmlSchemaParticle__EmptyParticle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
