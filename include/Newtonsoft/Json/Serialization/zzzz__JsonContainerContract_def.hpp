#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
struct ReferenceLoopHandling;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonContainerContract;
}
// Type: Newtonsoft.Json.Serialization::JsonContainerContract
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11885))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11849))
// CS Name: Newtonsoft.Json.Serialization.JsonContainerContract
class CORDL_TYPE JsonContainerContract : public Newtonsoft::Json::Serialization::JsonContract {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~JsonContainerContract() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonContainerContract", modifiers: " const&", def_value: None }]
constexpr JsonContainerContract(JsonContainerContract const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonContainerContract", modifiers: "&&", def_value: None }]
constexpr JsonContainerContract(JsonContainerContract&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonContainerContract(void* ptr) noexcept : Newtonsoft::Json::Serialization::JsonContract(ptr) {
}


  constexpr JsonContainerContract& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonContainerContract& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonContainerContract& operator=(JsonContainerContract&& o) noexcept = default;
  constexpr JsonContainerContract& operator=(JsonContainerContract const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::Serialization::JsonContract __declspec(property(get=__get__itemContract, put=__set__itemContract))  _itemContract;

constexpr void __set__itemContract(Newtonsoft::Json::Serialization::JsonContract value) ;

constexpr Newtonsoft::Json::Serialization::JsonContract __get__itemContract() const;

 Newtonsoft::Json::Serialization::JsonContract __declspec(property(get=__get__finalItemContract, put=__set__finalItemContract))  _finalItemContract;

constexpr void __set__finalItemContract(Newtonsoft::Json::Serialization::JsonContract value) ;

constexpr Newtonsoft::Json::Serialization::JsonContract __get__finalItemContract() const;

 Newtonsoft::Json::JsonConverter __declspec(property(get=__get__ItemConverter_k__BackingField, put=__set__ItemConverter_k__BackingField))  _ItemConverter_k__BackingField;

constexpr void __set__ItemConverter_k__BackingField(Newtonsoft::Json::JsonConverter value) ;

constexpr Newtonsoft::Json::JsonConverter __get__ItemConverter_k__BackingField() const;

 System::Nullable_1<bool> __declspec(property(get=__get__ItemIsReference_k__BackingField, put=__set__ItemIsReference_k__BackingField))  _ItemIsReference_k__BackingField;

constexpr void __set__ItemIsReference_k__BackingField(System::Nullable_1<bool> value) ;

constexpr System::Nullable_1<bool> __get__ItemIsReference_k__BackingField() const;

 System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> __declspec(property(get=__get__ItemReferenceLoopHandling_k__BackingField, put=__set__ItemReferenceLoopHandling_k__BackingField))  _ItemReferenceLoopHandling_k__BackingField;

constexpr void __set__ItemReferenceLoopHandling_k__BackingField(System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> __get__ItemReferenceLoopHandling_k__BackingField() const;

 System::Nullable_1<Newtonsoft::Json::TypeNameHandling> __declspec(property(get=__get__ItemTypeNameHandling_k__BackingField, put=__set__ItemTypeNameHandling_k__BackingField))  _ItemTypeNameHandling_k__BackingField;

constexpr void __set__ItemTypeNameHandling_k__BackingField(System::Nullable_1<Newtonsoft::Json::TypeNameHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::TypeNameHandling> __get__ItemTypeNameHandling_k__BackingField() const;


// Properties

 Newtonsoft::Json::Serialization::JsonContract __declspec(property(get=get_ItemContract, put=set_ItemContract))  ItemContract;

 Newtonsoft::Json::Serialization::JsonContract __declspec(property(get=get_FinalItemContract))  FinalItemContract;

 Newtonsoft::Json::JsonConverter __declspec(property(get=get_ItemConverter, put=set_ItemConverter))  ItemConverter;

 System::Nullable_1<bool> __declspec(property(get=get_ItemIsReference, put=set_ItemIsReference))  ItemIsReference;

 System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> __declspec(property(get=get_ItemReferenceLoopHandling, put=set_ItemReferenceLoopHandling))  ItemReferenceLoopHandling;

 System::Nullable_1<Newtonsoft::Json::TypeNameHandling> __declspec(property(get=get_ItemTypeNameHandling, put=set_ItemTypeNameHandling))  ItemTypeNameHandling;


// Methods

/// @brief Method get_ItemContract addr 0x24f2824 size 0x8 virtual false final false
 Newtonsoft::Json::Serialization::JsonContract get_ItemContract() ;

/// @brief Method set_ItemContract addr 0x24f282c size 0x44 virtual false final false
 void set_ItemContract(Newtonsoft::Json::Serialization::JsonContract value) ;

/// @brief Method get_FinalItemContract addr 0x24f2870 size 0x8 virtual false final false
 Newtonsoft::Json::Serialization::JsonContract get_FinalItemContract() ;

/// @brief Method get_ItemConverter addr 0x24f2878 size 0x8 virtual false final false
 Newtonsoft::Json::JsonConverter get_ItemConverter() ;

/// @brief Method set_ItemConverter addr 0x24f2880 size 0x8 virtual false final false
 void set_ItemConverter(Newtonsoft::Json::JsonConverter value) ;

/// @brief Method get_ItemIsReference addr 0x24f2888 size 0x8 virtual false final false
 System::Nullable_1<bool> get_ItemIsReference() ;

/// @brief Method set_ItemIsReference addr 0x24f2890 size 0x8 virtual false final false
 void set_ItemIsReference(System::Nullable_1<bool> value) ;

/// @brief Method get_ItemReferenceLoopHandling addr 0x24f2898 size 0x8 virtual false final false
 System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> get_ItemReferenceLoopHandling() ;

/// @brief Method set_ItemReferenceLoopHandling addr 0x24f28a0 size 0x8 virtual false final false
 void set_ItemReferenceLoopHandling(System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> value) ;

/// @brief Method get_ItemTypeNameHandling addr 0x24f28a8 size 0x8 virtual false final false
 System::Nullable_1<Newtonsoft::Json::TypeNameHandling> get_ItemTypeNameHandling() ;

/// @brief Method set_ItemTypeNameHandling addr 0x24f28b0 size 0x8 virtual false final false
 void set_ItemTypeNameHandling(System::Nullable_1<Newtonsoft::Json::TypeNameHandling> value) ;

// Ctor Parameters [CppParam { name: "underlyingType", ty: "System::Type", modifiers: "", def_value: None }]
explicit JsonContainerContract(System::Type underlyingType) ;

/// @brief Method .ctor addr 0x24f28b8 size 0xdc virtual false final false
 void _ctor(System::Type underlyingType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::JsonContainerContract);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::JsonContainerContract, "Newtonsoft.Json.Serialization", "JsonContainerContract");
