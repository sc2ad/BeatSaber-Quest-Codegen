#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class BoolWithDefaultValueSO;
}
// Type: ::BoolWithDefaultValueSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13896))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13897))
// CS Name: BoolWithDefaultValueSO
class CORDL_TYPE BoolWithDefaultValueSO : public ::GlobalNamespace::BoolSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BoolWithDefaultValueSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BoolWithDefaultValueSO", modifiers: " const&", def_value: None }]
constexpr BoolWithDefaultValueSO(BoolWithDefaultValueSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BoolWithDefaultValueSO", modifiers: "&&", def_value: None }]
constexpr BoolWithDefaultValueSO(BoolWithDefaultValueSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BoolWithDefaultValueSO(void* ptr) noexcept : ::GlobalNamespace::BoolSO(ptr) {
}


  constexpr BoolWithDefaultValueSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BoolWithDefaultValueSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BoolWithDefaultValueSO& operator=(BoolWithDefaultValueSO&& o) noexcept = default;
  constexpr BoolWithDefaultValueSO& operator=(BoolWithDefaultValueSO const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__defaultValue, put=__set__defaultValue))  _defaultValue;

constexpr void __set__defaultValue(bool value) ;

constexpr bool __get__defaultValue() const;


// Methods

/// @brief Method OnEnable addr 0x1f83cb0 size 0x68 virtual true final false
 void OnEnable() ;

// Ctor Parameters []
explicit BoolWithDefaultValueSO() ;

/// @brief Method .ctor addr 0x1f83d18 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BoolWithDefaultValueSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BoolWithDefaultValueSO, "", "BoolWithDefaultValueSO");
