#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
struct ____System__Xml__Schema__SchemaDeclBase__Use;
}
namespace System::Xml::Schema {
class SchemaDeclBase;
}
// Type: ::Use
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11644))
// CS Name: System.Xml.Schema.SchemaDeclBase::Use
struct CORDL_TYPE ____System__Xml__Schema__SchemaDeclBase__Use : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__Xml__Schema__SchemaDeclBase__Use(int32_t value__) noexcept;


                    constexpr ____System__Xml__Schema__SchemaDeclBase__Use(____System__Xml__Schema__SchemaDeclBase__Use const&) = default;
                    constexpr ____System__Xml__Schema__SchemaDeclBase__Use(____System__Xml__Schema__SchemaDeclBase__Use&&) = default;
                    constexpr ____System__Xml__Schema__SchemaDeclBase__Use& operator=(____System__Xml__Schema__SchemaDeclBase__Use const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Xml__Schema__SchemaDeclBase__Use& operator=(____System__Xml__Schema__SchemaDeclBase__Use&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Xml__Schema__SchemaDeclBase__Use(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______System__Xml__Schema__SchemaDeclBase__Use_Unwrapped : int32_t {
__Default = 0,
__Required = 1,
__Implied = 2,
__Fixed = 3,
__RequiredFixed = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______System__Xml__Schema__SchemaDeclBase__Use_Unwrapped () const noexcept {
return std::bit_cast<______System__Xml__Schema__SchemaDeclBase__Use_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Default offset 0
static ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use const Default;

/// @brief Field Required offset 0
static ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use const Required;

/// @brief Field Implied offset 0
static ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use const Implied;

/// @brief Field Fixed offset 0
static ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use const Fixed;

/// @brief Field RequiredFixed offset 0
static ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use const RequiredFixed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
// Type: System.Xml.Schema::SchemaDeclBase
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11645))
// CS Name: System.Xml.Schema.SchemaDeclBase
class CORDL_TYPE SchemaDeclBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Use = ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~SchemaDeclBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "SchemaDeclBase", modifiers: " const&", def_value: None }]
constexpr SchemaDeclBase(SchemaDeclBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SchemaDeclBase", modifiers: "&&", def_value: None }]
constexpr SchemaDeclBase(SchemaDeclBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SchemaDeclBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SchemaDeclBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SchemaDeclBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SchemaDeclBase& operator=(SchemaDeclBase&& o) noexcept = default;
  constexpr SchemaDeclBase& operator=(SchemaDeclBase const& o) noexcept = default;
                


// Fields

 ::System::Xml::XmlQualifiedName __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::System::Xml::XmlQualifiedName value) ;

constexpr ::System::Xml::XmlQualifiedName __get_name() const;

 ::StringW __declspec(property(get=__get_prefix, put=__set_prefix))  prefix;

constexpr void __set_prefix(::StringW value) ;

constexpr ::StringW __get_prefix() const;

 bool __declspec(property(get=__get_isDeclaredInExternal, put=__set_isDeclaredInExternal))  isDeclaredInExternal;

constexpr void __set_isDeclaredInExternal(bool value) ;

constexpr bool __get_isDeclaredInExternal() const;

 ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use __declspec(property(get=__get_presence, put=__set_presence))  presence;

constexpr void __set_presence(::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use value) ;

constexpr ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use __get_presence() const;

 ::System::Xml::Schema::XmlSchemaType __declspec(property(get=__get_schemaType, put=__set_schemaType))  schemaType;

constexpr void __set_schemaType(::System::Xml::Schema::XmlSchemaType value) ;

constexpr ::System::Xml::Schema::XmlSchemaType __get_schemaType() const;

 ::System::Xml::Schema::XmlSchemaDatatype __declspec(property(get=__get_datatype, put=__set_datatype))  datatype;

constexpr void __set_datatype(::System::Xml::Schema::XmlSchemaDatatype value) ;

constexpr ::System::Xml::Schema::XmlSchemaDatatype __get_datatype() const;

 ::StringW __declspec(property(get=__get_defaultValueRaw, put=__set_defaultValueRaw))  defaultValueRaw;

constexpr void __set_defaultValueRaw(::StringW value) ;

constexpr ::StringW __get_defaultValueRaw() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_defaultValueTyped, put=__set_defaultValueTyped))  defaultValueTyped;

constexpr void __set_defaultValueTyped(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_defaultValueTyped() const;

 int64_t __declspec(property(get=__get_maxLength, put=__set_maxLength))  maxLength;

constexpr void __set_maxLength(int64_t value) ;

constexpr int64_t __get_maxLength() const;

 int64_t __declspec(property(get=__get_minLength, put=__set_minLength))  minLength;

constexpr void __set_minLength(int64_t value) ;

constexpr int64_t __get_minLength() const;

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_values, put=__set_values))  values;

constexpr void __set_values(::System::Collections::Generic::List_1<::StringW> value) ;

constexpr ::System::Collections::Generic::List_1<::StringW> __get_values() const;


// Properties

 ::System::Xml::XmlQualifiedName __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_Prefix))  Prefix;

 bool __declspec(property(get=get_IsDeclaredInExternal, put=set_IsDeclaredInExternal))  IsDeclaredInExternal;

 ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use __declspec(property(get=get_Presence, put=set_Presence))  Presence;

 ::System::Xml::Schema::XmlSchemaType __declspec(property(put=set_SchemaType))  SchemaType;

 ::System::Xml::Schema::XmlSchemaDatatype __declspec(property(get=get_Datatype, put=set_Datatype))  Datatype;

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=get_Values))  Values;

 ::StringW __declspec(property(get=get_DefaultValueRaw))  DefaultValueRaw;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_DefaultValueTyped, put=set_DefaultValueTyped))  DefaultValueTyped;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::System::Xml::XmlQualifiedName", modifiers: "", def_value: None }, CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }]
explicit SchemaDeclBase(::System::Xml::XmlQualifiedName name, ::StringW prefix) ;

/// @brief Method .ctor addr 0x27309f0 size 0x88 virtual false final false
 void _ctor(::System::Xml::XmlQualifiedName name, ::StringW prefix) ;

// Ctor Parameters []
explicit SchemaDeclBase() ;

/// @brief Method .ctor addr 0x2730a7c size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method get_Name addr 0x2731018 size 0x8 virtual false final false
 ::System::Xml::XmlQualifiedName get_Name() ;

/// @brief Method get_Prefix addr 0x2730b38 size 0x54 virtual false final false
 ::StringW get_Prefix() ;

/// @brief Method get_IsDeclaredInExternal addr 0x2731020 size 0x8 virtual false final false
 bool get_IsDeclaredInExternal() ;

/// @brief Method set_IsDeclaredInExternal addr 0x2731028 size 0xc virtual false final false
 void set_IsDeclaredInExternal(bool value) ;

/// @brief Method get_Presence addr 0x2731034 size 0x8 virtual false final false
 ::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use get_Presence() ;

/// @brief Method set_Presence addr 0x273103c size 0x8 virtual false final false
 void set_Presence(::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use value) ;

/// @brief Method set_SchemaType addr 0x2731044 size 0x8 virtual false final false
 void set_SchemaType(::System::Xml::Schema::XmlSchemaType value) ;

/// @brief Method get_Datatype addr 0x273104c size 0x8 virtual false final false
 ::System::Xml::Schema::XmlSchemaDatatype get_Datatype() ;

/// @brief Method set_Datatype addr 0x2731054 size 0x8 virtual false final false
 void set_Datatype(::System::Xml::Schema::XmlSchemaDatatype value) ;

/// @brief Method AddValue addr 0x273105c size 0xf0 virtual false final false
 void AddValue(::StringW value) ;

/// @brief Method get_Values addr 0x273114c size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::StringW> get_Values() ;

/// @brief Method get_DefaultValueRaw addr 0x2731154 size 0x54 virtual false final false
 ::StringW get_DefaultValueRaw() ;

/// @brief Method get_DefaultValueTyped addr 0x27311a8 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_DefaultValueTyped() ;

/// @brief Method set_DefaultValueTyped addr 0x27311b0 size 0x8 virtual false final false
 void set_DefaultValueTyped(::bs_hook::Il2CppWrapperType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::____System__Xml__Schema__SchemaDeclBase__Use, "System.Xml.Schema", "SchemaDeclBase/Use");
NEED_NO_BOX(::System::Xml::Schema::SchemaDeclBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaDeclBase, "System.Xml.Schema", "SchemaDeclBase");
