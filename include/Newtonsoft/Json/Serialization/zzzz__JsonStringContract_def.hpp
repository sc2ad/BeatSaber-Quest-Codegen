#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonPrimitiveContract_def.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonStringContract;
}
// Type: Newtonsoft.Json.Serialization::JsonStringContract
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11900))
// CS Name: Newtonsoft.Json.Serialization.JsonStringContract
class CORDL_TYPE JsonStringContract : public Newtonsoft::Json::Serialization::JsonPrimitiveContract {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~JsonStringContract() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonStringContract", modifiers: " const&", def_value: None }]
constexpr JsonStringContract(JsonStringContract const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonStringContract", modifiers: "&&", def_value: None }]
constexpr JsonStringContract(JsonStringContract&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonStringContract(void* ptr) noexcept : Newtonsoft::Json::Serialization::JsonPrimitiveContract(ptr) {
}


  constexpr JsonStringContract& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonStringContract& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonStringContract& operator=(JsonStringContract&& o) noexcept = default;
  constexpr JsonStringContract& operator=(JsonStringContract const& o) noexcept = default;
                


// Methods

static Newtonsoft::Json::Serialization::JsonStringContract New_ctor(System::Type underlyingType) ;

/// @brief Method .ctor addr 0x2516110 size 0x74 virtual false final false
 void _ctor(System::Type underlyingType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::JsonStringContract);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::JsonStringContract, "Newtonsoft.Json.Serialization", "JsonStringContract");
