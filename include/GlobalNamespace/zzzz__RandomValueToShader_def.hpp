#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class RandomValueToShader;
}
// Type: ::RandomValueToShader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14656))
// CS Name: RandomValueToShader
class CORDL_TYPE RandomValueToShader : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RandomValueToShader() = default;

// Ctor Parameters [CppParam { name: "", ty: "RandomValueToShader", modifiers: " const&", def_value: None }]
constexpr RandomValueToShader(RandomValueToShader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RandomValueToShader", modifiers: "&&", def_value: None }]
constexpr RandomValueToShader(RandomValueToShader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RandomValueToShader(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr RandomValueToShader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RandomValueToShader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RandomValueToShader& operator=(RandomValueToShader&& o) noexcept = default;
  constexpr RandomValueToShader& operator=(RandomValueToShader const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__lastFrameNum, put=__set__lastFrameNum))  _lastFrameNum;

constexpr void __set__lastFrameNum(int32_t value) ;

constexpr int32_t __get__lastFrameNum() const;

static int32_t __declspec(property(get=__get__randomValueID, put=__set__randomValueID))  _randomValueID;

static void __set__randomValueID(int32_t value) ;

static int32_t __get__randomValueID() ;


// Methods

/// @brief Method SetRandomValueToShaders addr 0x1f98dbc size 0x8c virtual false final false
 void SetRandomValueToShaders() ;

// Ctor Parameters []
explicit RandomValueToShader() ;

/// @brief Method .ctor addr 0x1f98e50 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::RandomValueToShader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomValueToShader, "", "RandomValueToShader");
