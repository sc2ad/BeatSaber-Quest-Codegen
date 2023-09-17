#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class StringListSO;
}
// Type: ::StringListSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13906))
// CS Name: StringListSO
class CORDL_TYPE StringListSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~StringListSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringListSO", modifiers: " const&", def_value: None }]
constexpr StringListSO(StringListSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringListSO", modifiers: "&&", def_value: None }]
constexpr StringListSO(StringListSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringListSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr StringListSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringListSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringListSO& operator=(StringListSO&& o) noexcept = default;
  constexpr StringListSO& operator=(StringListSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<::StringW> __declspec(property(get=__get__strings, put=__set__strings))  _strings;

constexpr void __set__strings(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__strings() const;


// Properties

 ::ArrayW<::StringW> __declspec(property(get=get_strings))  strings;


// Methods

/// @brief Method get_strings addr 0x1f83dfc size 0x8 virtual false final false
 ::ArrayW<::StringW> get_strings() ;

// Ctor Parameters []
explicit StringListSO() ;

/// @brief Method .ctor addr 0x1f83e04 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::StringListSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StringListSO, "", "StringListSO");
