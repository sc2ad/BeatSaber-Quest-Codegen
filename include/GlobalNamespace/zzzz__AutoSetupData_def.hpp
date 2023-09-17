#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class AutoSetupData;
}
// Type: ::AutoSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5646))
// CS Name: AutoSetupData
class CORDL_TYPE AutoSetupData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AutoSetupData() = default;

// Ctor Parameters [CppParam { name: "", ty: "AutoSetupData", modifiers: " const&", def_value: None }]
constexpr AutoSetupData(AutoSetupData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AutoSetupData", modifiers: "&&", def_value: None }]
constexpr AutoSetupData(AutoSetupData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AutoSetupData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AutoSetupData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AutoSetupData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AutoSetupData& operator=(AutoSetupData&& o) noexcept = default;
  constexpr AutoSetupData& operator=(AutoSetupData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_selectBasedOnSuggestions, put=__set_selectBasedOnSuggestions))  selectBasedOnSuggestions;

constexpr void __set_selectBasedOnSuggestions(bool value) ;

constexpr bool __get_selectBasedOnSuggestions() const;

 bool __declspec(property(get=__get_autoStartWhenAllReady, put=__set_autoStartWhenAllReady))  autoStartWhenAllReady;

constexpr void __set_autoStartWhenAllReady(bool value) ;

constexpr bool __get_autoStartWhenAllReady() const;

 bool __declspec(property(get=__get_forceAutoStartAfterSongSelection, put=__set_forceAutoStartAfterSongSelection))  forceAutoStartAfterSongSelection;

constexpr void __set_forceAutoStartAfterSongSelection(bool value) ;

constexpr bool __get_forceAutoStartAfterSongSelection() const;

 bool __declspec(property(get=__get_randomSongIfNoneSuggested, put=__set_randomSongIfNoneSuggested))  randomSongIfNoneSuggested;

constexpr void __set_randomSongIfNoneSuggested(bool value) ;

constexpr bool __get_randomSongIfNoneSuggested() const;


// Methods

// Ctor Parameters []
explicit AutoSetupData() ;

/// @brief Method .ctor addr 0x214b760 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AutoSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutoSetupData, "", "AutoSetupData");
