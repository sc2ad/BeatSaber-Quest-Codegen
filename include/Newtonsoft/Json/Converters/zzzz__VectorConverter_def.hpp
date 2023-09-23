#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Vector4;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class VectorConverter;
}
// Type: Newtonsoft.Json.Converters::VectorConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11772))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11986))
// CS Name: Newtonsoft.Json.Converters.VectorConverter
class CORDL_TYPE VectorConverter : public Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~VectorConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "VectorConverter", modifiers: " const&", def_value: None }]
constexpr VectorConverter(VectorConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VectorConverter", modifiers: "&&", def_value: None }]
constexpr VectorConverter(VectorConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VectorConverter(void* ptr) noexcept : Newtonsoft::Json::JsonConverter(ptr) {
}


  constexpr VectorConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VectorConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VectorConverter& operator=(VectorConverter&& o) noexcept = default;
  constexpr VectorConverter& operator=(VectorConverter const& o) noexcept = default;
                


// Fields

static System::Type __declspec(property(get=__get_V2, put=__set_V2))  V2;

static void __set_V2(System::Type value) ;

static System::Type __get_V2() ;

static System::Type __declspec(property(get=__get_V3, put=__set_V3))  V3;

static void __set_V3(System::Type value) ;

static System::Type __get_V3() ;

static System::Type __declspec(property(get=__get_V4, put=__set_V4))  V4;

static void __set_V4(System::Type value) ;

static System::Type __get_V4() ;

 bool __declspec(property(get=__get__EnableVector2_k__BackingField, put=__set__EnableVector2_k__BackingField))  _EnableVector2_k__BackingField;

constexpr void __set__EnableVector2_k__BackingField(bool value) ;

constexpr bool __get__EnableVector2_k__BackingField() const;

 bool __declspec(property(get=__get__EnableVector3_k__BackingField, put=__set__EnableVector3_k__BackingField))  _EnableVector3_k__BackingField;

constexpr void __set__EnableVector3_k__BackingField(bool value) ;

constexpr bool __get__EnableVector3_k__BackingField() const;

 bool __declspec(property(get=__get__EnableVector4_k__BackingField, put=__set__EnableVector4_k__BackingField))  _EnableVector4_k__BackingField;

constexpr void __set__EnableVector4_k__BackingField(bool value) ;

constexpr bool __get__EnableVector4_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_EnableVector2, put=set_EnableVector2))  EnableVector2;

 bool __declspec(property(get=get_EnableVector3, put=set_EnableVector3))  EnableVector3;

 bool __declspec(property(get=get_EnableVector4, put=set_EnableVector4))  EnableVector4;


// Methods

/// @brief Method get_EnableVector2 addr 0x253f9e0 size 0x8 virtual false final false
 bool get_EnableVector2() ;

/// @brief Method set_EnableVector2 addr 0x253f9e8 size 0xc virtual false final false
 void set_EnableVector2(bool value) ;

/// @brief Method get_EnableVector3 addr 0x253f9f4 size 0x8 virtual false final false
 bool get_EnableVector3() ;

/// @brief Method set_EnableVector3 addr 0x253f9fc size 0xc virtual false final false
 void set_EnableVector3(bool value) ;

/// @brief Method get_EnableVector4 addr 0x253fa08 size 0x8 virtual false final false
 bool get_EnableVector4() ;

/// @brief Method set_EnableVector4 addr 0x253fa10 size 0xc virtual false final false
 void set_EnableVector4(bool value) ;

// Ctor Parameters []
explicit VectorConverter() ;

/// @brief Method .ctor addr 0x253fa1c size 0x28 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "enableVector2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "enableVector3", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "enableVector4", ty: "bool", modifiers: "", def_value: None }]
explicit VectorConverter(bool enableVector2, bool enableVector3, bool enableVector4) ;

/// @brief Method .ctor addr 0x253fa44 size 0x4c virtual false final false
 void _ctor(bool enableVector2, bool enableVector3, bool enableVector4) ;

/// @brief Method WriteJson addr 0x253fa90 size 0x2b0 virtual true final false
 void WriteJson(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method WriteVector addr 0x253fd40 size 0x1d0 virtual false final false
static void WriteVector(Newtonsoft::Json::JsonWriter writer, float_t x, float_t y, System::Nullable_1<float_t> z, System::Nullable_1<float_t> w) ;

/// @brief Method ReadJson addr 0x253ff10 size 0x138 virtual true final false
 ::bs_hook::Il2CppWrapperType ReadJson(Newtonsoft::Json::JsonReader reader, System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method CanConvert addr 0x25403b4 size 0xd8 virtual true final false
 bool CanConvert(System::Type objectType) ;

/// @brief Method PopulateVector2 addr 0x2540048 size 0xe4 virtual false final false
static UnityEngine::Vector2 PopulateVector2(Newtonsoft::Json::JsonReader reader) ;

/// @brief Method PopulateVector3 addr 0x254012c size 0x124 virtual false final false
static UnityEngine::Vector3 PopulateVector3(Newtonsoft::Json::JsonReader reader) ;

/// @brief Method PopulateVector4 addr 0x2540250 size 0x164 virtual false final false
static UnityEngine::Vector4 PopulateVector4(Newtonsoft::Json::JsonReader reader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::VectorConverter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::VectorConverter, "Newtonsoft.Json.Converters", "VectorConverter");
