#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
template<typename T>
class EnumValue_1;
}
namespace Newtonsoft::Json::Utilities {
template<>
class EnumValue_1<uint64_t>;
}
// Type: Newtonsoft.Json.Utilities::EnumValue`1
// Type: Newtonsoft.Json.Utilities::EnumValue`1
namespace Newtonsoft::Json::Utilities {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11829))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11829), inst: 389 })
// CS Name: Newtonsoft.Json.Utilities.EnumValue`1
class CORDL_TYPE EnumValue_1<uint64_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EnumValue_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumValue_1", modifiers: " const&", def_value: None }]
constexpr EnumValue_1(EnumValue_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumValue_1", modifiers: "&&", def_value: None }]
constexpr EnumValue_1(EnumValue_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumValue_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnumValue_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumValue_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumValue_1& operator=(EnumValue_1&& o) noexcept = default;
  constexpr EnumValue_1& operator=(EnumValue_1 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;

 uint64_t __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(uint64_t value) ;

constexpr uint64_t __get__value() const;


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 uint64_t __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method get_Name addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_Name() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 uint64_t get_Value() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "uint64_t", modifiers: "", def_value: None }]
explicit EnumValue_1(::StringW name, uint64_t value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW name, uint64_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::EnumValue_1, "Newtonsoft.Json.Utilities", "EnumValue`1");
