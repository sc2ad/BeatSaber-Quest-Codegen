#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
// Forward declare root types
namespace UnityEngine {
class PreloadData;
}
// Type: UnityEngine::PreloadData
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10214))
// CS Name: UnityEngine.PreloadData
class CORDL_TYPE PreloadData : public UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PreloadData() = default;

// Ctor Parameters [CppParam { name: "", ty: "PreloadData", modifiers: " const&", def_value: None }]
constexpr PreloadData(PreloadData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PreloadData", modifiers: "&&", def_value: None }]
constexpr PreloadData(PreloadData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PreloadData(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr PreloadData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PreloadData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PreloadData& operator=(PreloadData&& o) noexcept = default;
  constexpr PreloadData& operator=(PreloadData const& o) noexcept = default;
                


// Methods

/// @brief Method PreloadDataDontStripMe addr 0x2b6976c size 0x4 virtual false final false
 void PreloadDataDontStripMe() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::PreloadData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PreloadData, "UnityEngine", "PreloadData");
