#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::ProBuilder {
class IHasDefault;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class PreferenceDictionary;
}
// Type: UnityEngine.ProBuilder::PreferenceDictionary
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12093))
// CS Name: UnityEngine.ProBuilder.PreferenceDictionary
class CORDL_TYPE PreferenceDictionary : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ISerializationCallbackReceiver
constexpr operator  UnityEngine::ISerializationCallbackReceiver() const noexcept;

/// @brief Convert operator to UnityEngine::ProBuilder::IHasDefault
constexpr operator  UnityEngine::ProBuilder::IHasDefault() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~PreferenceDictionary() = default;

// Ctor Parameters [CppParam { name: "", ty: "PreferenceDictionary", modifiers: " const&", def_value: None }]
constexpr PreferenceDictionary(PreferenceDictionary const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PreferenceDictionary", modifiers: "&&", def_value: None }]
constexpr PreferenceDictionary(PreferenceDictionary&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PreferenceDictionary(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr PreferenceDictionary& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PreferenceDictionary& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PreferenceDictionary& operator=(PreferenceDictionary&& o) noexcept = default;
  constexpr PreferenceDictionary& operator=(PreferenceDictionary const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<::StringW,bool> __declspec(property(get=__get_m_Bool, put=__set_m_Bool))  m_Bool;

constexpr void __set_m_Bool(System::Collections::Generic::Dictionary_2<::StringW,bool> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,bool> __get_m_Bool() const;

 System::Collections::Generic::Dictionary_2<::StringW,int32_t> __declspec(property(get=__get_m_Int, put=__set_m_Int))  m_Int;

constexpr void __set_m_Int(System::Collections::Generic::Dictionary_2<::StringW,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,int32_t> __get_m_Int() const;

 System::Collections::Generic::Dictionary_2<::StringW,float_t> __declspec(property(get=__get_m_Float, put=__set_m_Float))  m_Float;

constexpr void __set_m_Float(System::Collections::Generic::Dictionary_2<::StringW,float_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,float_t> __get_m_Float() const;

 System::Collections::Generic::Dictionary_2<::StringW,::StringW> __declspec(property(get=__get_m_String, put=__set_m_String))  m_String;

constexpr void __set_m_String(System::Collections::Generic::Dictionary_2<::StringW,::StringW> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,::StringW> __get_m_String() const;

 System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::Color> __declspec(property(get=__get_m_Color, put=__set_m_Color))  m_Color;

constexpr void __set_m_Color(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::Color> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::Color> __get_m_Color() const;

 System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::Material> __declspec(property(get=__get_m_Material, put=__set_m_Material))  m_Material;

constexpr void __set_m_Material(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::Material> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::Material> __get_m_Material() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_m_Bool_keys, put=__set_m_Bool_keys))  m_Bool_keys;

constexpr void __set_m_Bool_keys(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_m_Bool_keys() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_m_Int_keys, put=__set_m_Int_keys))  m_Int_keys;

constexpr void __set_m_Int_keys(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_m_Int_keys() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_m_Float_keys, put=__set_m_Float_keys))  m_Float_keys;

constexpr void __set_m_Float_keys(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_m_Float_keys() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_m_String_keys, put=__set_m_String_keys))  m_String_keys;

constexpr void __set_m_String_keys(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_m_String_keys() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_m_Color_keys, put=__set_m_Color_keys))  m_Color_keys;

constexpr void __set_m_Color_keys(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_m_Color_keys() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_m_Material_keys, put=__set_m_Material_keys))  m_Material_keys;

constexpr void __set_m_Material_keys(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_m_Material_keys() const;

 System::Collections::Generic::List_1<bool> __declspec(property(get=__get_m_Bool_values, put=__set_m_Bool_values))  m_Bool_values;

constexpr void __set_m_Bool_values(System::Collections::Generic::List_1<bool> value) ;

constexpr System::Collections::Generic::List_1<bool> __get_m_Bool_values() const;

 System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_m_Int_values, put=__set_m_Int_values))  m_Int_values;

constexpr void __set_m_Int_values(System::Collections::Generic::List_1<int32_t> value) ;

constexpr System::Collections::Generic::List_1<int32_t> __get_m_Int_values() const;

 System::Collections::Generic::List_1<float_t> __declspec(property(get=__get_m_Float_values, put=__set_m_Float_values))  m_Float_values;

constexpr void __set_m_Float_values(System::Collections::Generic::List_1<float_t> value) ;

constexpr System::Collections::Generic::List_1<float_t> __get_m_Float_values() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_m_String_values, put=__set_m_String_values))  m_String_values;

constexpr void __set_m_String_values(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_m_String_values() const;

 System::Collections::Generic::List_1<UnityEngine::Color> __declspec(property(get=__get_m_Color_values, put=__set_m_Color_values))  m_Color_values;

constexpr void __set_m_Color_values(System::Collections::Generic::List_1<UnityEngine::Color> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Color> __get_m_Color_values() const;

 System::Collections::Generic::List_1<UnityEngine::Material> __declspec(property(get=__get_m_Material_values, put=__set_m_Material_values))  m_Material_values;

constexpr void __set_m_Material_values(System::Collections::Generic::List_1<UnityEngine::Material> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Material> __get_m_Material_values() const;


// Methods

/// @brief Method OnBeforeSerialize addr 0x29c16e8 size 0x314 virtual true final true
 void OnBeforeSerialize() ;

/// @brief Method OnAfterDeserialize addr 0x29c19fc size 0x3c8 virtual true final true
 void OnAfterDeserialize() ;

/// @brief Method SetDefaultValues addr 0x29c1dc4 size 0x104 virtual true final true
 void SetDefaultValues() ;

/// @brief Method HasKey addr 0x29c1ec8 size 0x144 virtual false final false
 bool HasKey(::StringW key) ;

/// @brief Method HasKey addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 bool HasKey(::StringW key) ;

/// @brief Method DeleteKey addr 0x29c200c size 0x234 virtual false final false
 void DeleteKey(::StringW key) ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T Get(::StringW key, T fallback) ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void Set(::StringW key, T value) ;

/// @brief Method GetBool addr 0x29c2240 size 0x88 virtual false final false
 bool GetBool(::StringW key, bool fallback) ;

/// @brief Method GetInt addr 0x29c22c8 size 0x7c virtual false final false
 int32_t GetInt(::StringW key, int32_t fallback) ;

/// @brief Method GetFloat addr 0x29c2344 size 0x7c virtual false final false
 float_t GetFloat(::StringW key, float_t fallback) ;

/// @brief Method GetString addr 0x29c23c0 size 0x7c virtual false final false
 ::StringW GetString(::StringW key, ::StringW fallback) ;

/// @brief Method GetColor addr 0x29c243c size 0xa8 virtual false final false
 UnityEngine::Color GetColor(::StringW key, UnityEngine::Color fallback) ;

/// @brief Method GetMaterial addr 0x29c24e4 size 0x7c virtual false final false
 UnityEngine::Material GetMaterial(::StringW key, UnityEngine::Material fallback) ;

/// @brief Method SetBool addr 0x29c2560 size 0xcc virtual false final false
 void SetBool(::StringW key, bool value) ;

/// @brief Method SetInt addr 0x29c262c size 0xcc virtual false final false
 void SetInt(::StringW key, int32_t value) ;

/// @brief Method SetFloat addr 0x29c26f8 size 0xcc virtual false final false
 void SetFloat(::StringW key, float_t value) ;

/// @brief Method SetString addr 0x29c27c4 size 0xcc virtual false final false
 void SetString(::StringW key, ::StringW value) ;

/// @brief Method SetColor addr 0x29c2890 size 0xfc virtual false final false
 void SetColor(::StringW key, UnityEngine::Color value) ;

/// @brief Method SetMaterial addr 0x29c298c size 0xcc virtual false final false
 void SetMaterial(::StringW key, UnityEngine::Material value) ;

/// @brief Method GetBoolDictionary addr 0x29c2a58 size 0x8 virtual false final false
 System::Collections::Generic::Dictionary_2<::StringW,bool> GetBoolDictionary() ;

/// @brief Method GetIntDictionary addr 0x29c2a60 size 0x8 virtual false final false
 System::Collections::Generic::Dictionary_2<::StringW,int32_t> GetIntDictionary() ;

/// @brief Method GetFloatDictionary addr 0x29c2a68 size 0x8 virtual false final false
 System::Collections::Generic::Dictionary_2<::StringW,float_t> GetFloatDictionary() ;

/// @brief Method GetStringDictionary addr 0x29c2a70 size 0x8 virtual false final false
 System::Collections::Generic::Dictionary_2<::StringW,::StringW> GetStringDictionary() ;

/// @brief Method GetColorDictionary addr 0x29c2a78 size 0x8 virtual false final false
 System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::Color> GetColorDictionary() ;

/// @brief Method GetMaterialDictionary addr 0x29c2a80 size 0x8 virtual false final false
 System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::Material> GetMaterialDictionary() ;

/// @brief Method Clear addr 0x29c2a88 size 0xe0 virtual false final false
 void Clear() ;

static UnityEngine::ProBuilder::PreferenceDictionary New_ctor() ;

/// @brief Method .ctor addr 0x29c2b68 size 0x1d0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::PreferenceDictionary);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::PreferenceDictionary, "UnityEngine.ProBuilder", "PreferenceDictionary");
