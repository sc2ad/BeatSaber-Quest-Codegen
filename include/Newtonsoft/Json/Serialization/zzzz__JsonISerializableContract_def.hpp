#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Type;
}
namespace Newtonsoft::Json::Serialization {
template<typename T>
class ObjectConstructor_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonISerializableContract;
}
// Type: Newtonsoft.Json.Serialization::JsonISerializableContract
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11849))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11855))
// CS Name: Newtonsoft.Json.Serialization.JsonISerializableContract
class CORDL_TYPE JsonISerializableContract : public Newtonsoft::Json::Serialization::JsonContainerContract {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~JsonISerializableContract() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonISerializableContract", modifiers: " const&", def_value: None }]
constexpr JsonISerializableContract(JsonISerializableContract const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonISerializableContract", modifiers: "&&", def_value: None }]
constexpr JsonISerializableContract(JsonISerializableContract&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonISerializableContract(void* ptr) noexcept : Newtonsoft::Json::Serialization::JsonContainerContract(ptr) {
}


  constexpr JsonISerializableContract& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonISerializableContract& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonISerializableContract& operator=(JsonISerializableContract&& o) noexcept = default;
  constexpr JsonISerializableContract& operator=(JsonISerializableContract const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__ISerializableCreator_k__BackingField, put=__set__ISerializableCreator_k__BackingField))  _ISerializableCreator_k__BackingField;

constexpr void __set__ISerializableCreator_k__BackingField(Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __get__ISerializableCreator_k__BackingField() const;


// Properties

 Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_ISerializableCreator, put=set_ISerializableCreator))  ISerializableCreator;


// Methods

/// @brief Method get_ISerializableCreator addr 0x24f6140 size 0x8 virtual false final false
 Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> get_ISerializableCreator() ;

/// @brief Method set_ISerializableCreator addr 0x24f6148 size 0x8 virtual false final false
 void set_ISerializableCreator(Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> value) ;

// Ctor Parameters [CppParam { name: "underlyingType", ty: "System::Type", modifiers: "", def_value: None }]
explicit JsonISerializableContract(System::Type underlyingType) ;

/// @brief Method .ctor addr 0x24f6150 size 0x20 virtual false final false
 void _ctor(System::Type underlyingType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::JsonISerializableContract);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::JsonISerializableContract, "Newtonsoft.Json.Serialization", "JsonISerializableContract");
