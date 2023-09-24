#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
class UnityEngine__TextAsset__EncodingUtility;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace UnityEngine {
class TextAsset;
}
namespace UnityEngine {
class UnityEngine__TextAsset__EncodingUtility;
}
// Type: ::EncodingUtility
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10148))
// CS Name: UnityEngine.TextAsset::EncodingUtility
class CORDL_TYPE UnityEngine__TextAsset__EncodingUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__TextAsset__EncodingUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__TextAsset__EncodingUtility", modifiers: " const&", def_value: None }]
constexpr UnityEngine__TextAsset__EncodingUtility(UnityEngine__TextAsset__EncodingUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__TextAsset__EncodingUtility", modifiers: "&&", def_value: None }]
constexpr UnityEngine__TextAsset__EncodingUtility(UnityEngine__TextAsset__EncodingUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__TextAsset__EncodingUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__TextAsset__EncodingUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__TextAsset__EncodingUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__TextAsset__EncodingUtility& operator=(UnityEngine__TextAsset__EncodingUtility&& o) noexcept = default;
  constexpr UnityEngine__TextAsset__EncodingUtility& operator=(UnityEngine__TextAsset__EncodingUtility const& o) noexcept = default;
                


// Fields

static ::ArrayW<System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t>,System::Text::Encoding>> __declspec(property(get=__get_encodingLookup, put=__set_encodingLookup))  encodingLookup;

static void __set_encodingLookup(::ArrayW<System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t>,System::Text::Encoding>> value) ;

static ::ArrayW<System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t>,System::Text::Encoding>> __get_encodingLookup() ;

static System::Text::Encoding __declspec(property(get=__get_targetEncoding, put=__set_targetEncoding))  targetEncoding;

static void __set_targetEncoding(System::Text::Encoding value) ;

static System::Text::Encoding __get_targetEncoding() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::TextAsset
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10149))
// CS Name: UnityEngine.TextAsset
class CORDL_TYPE TextAsset : public UnityEngine::Object {
public:
// Declarations
using EncodingUtility = UnityEngine::UnityEngine__TextAsset__EncodingUtility;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TextAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextAsset", modifiers: " const&", def_value: None }]
constexpr TextAsset(TextAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextAsset", modifiers: "&&", def_value: None }]
constexpr TextAsset(TextAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextAsset(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr TextAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextAsset& operator=(TextAsset&& o) noexcept = default;
  constexpr TextAsset& operator=(TextAsset const& o) noexcept = default;
                


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_bytes))  bytes;

 ::StringW __declspec(property(get=get_text))  text;


// Methods

/// @brief Method get_bytes addr 0x2b59b40 size 0x3c virtual false final false
 ::ArrayW<uint8_t> get_bytes() ;

/// @brief Method get_text addr 0x2b59b7c size 0x40 virtual false final false
 ::StringW get_text() ;

/// @brief Method ToString addr 0x2b59e40 size 0x4 virtual true final false
 ::StringW ToString() ;

/// @brief Method DecodeString addr 0x2b59bbc size 0x284 virtual false final false
static ::StringW DecodeString(::ArrayW<uint8_t> bytes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::TextAsset);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextAsset, "UnityEngine", "TextAsset");
NEED_NO_BOX(UnityEngine::UnityEngine__TextAsset__EncodingUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__TextAsset__EncodingUtility, "UnityEngine", "TextAsset/EncodingUtility");
