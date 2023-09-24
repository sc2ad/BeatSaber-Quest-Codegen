#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonLinqContract;
}
// Type: Newtonsoft.Json.Serialization::JsonLinqContract
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11885))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11856))
// CS Name: Newtonsoft.Json.Serialization.JsonLinqContract
class CORDL_TYPE JsonLinqContract : public Newtonsoft::Json::Serialization::JsonContract {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~JsonLinqContract() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonLinqContract", modifiers: " const&", def_value: None }]
constexpr JsonLinqContract(JsonLinqContract const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonLinqContract", modifiers: "&&", def_value: None }]
constexpr JsonLinqContract(JsonLinqContract&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonLinqContract(void* ptr) noexcept : Newtonsoft::Json::Serialization::JsonContract(ptr) {
}


  constexpr JsonLinqContract& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonLinqContract& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonLinqContract& operator=(JsonLinqContract&& o) noexcept = default;
  constexpr JsonLinqContract& operator=(JsonLinqContract const& o) noexcept = default;
                


// Methods

static Newtonsoft::Json::Serialization::JsonLinqContract New_ctor(System::Type underlyingType) ;

/// @brief Method .ctor addr 0x24f6170 size 0x1c virtual false final false
 void _ctor(System::Type underlyingType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::JsonLinqContract);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::JsonLinqContract, "Newtonsoft.Json.Serialization", "JsonLinqContract");
