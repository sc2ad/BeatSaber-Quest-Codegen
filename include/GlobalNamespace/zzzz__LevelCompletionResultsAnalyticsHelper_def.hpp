#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelCompletionResultsAnalyticsHelper;
}
// Type: ::LevelCompletionResultsAnalyticsHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4001))
// CS Name: LevelCompletionResultsAnalyticsHelper
class CORDL_TYPE LevelCompletionResultsAnalyticsHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LevelCompletionResultsAnalyticsHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResultsAnalyticsHelper", modifiers: " const&", def_value: None }]
constexpr LevelCompletionResultsAnalyticsHelper(LevelCompletionResultsAnalyticsHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResultsAnalyticsHelper", modifiers: "&&", def_value: None }]
constexpr LevelCompletionResultsAnalyticsHelper(LevelCompletionResultsAnalyticsHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelCompletionResultsAnalyticsHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LevelCompletionResultsAnalyticsHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelCompletionResultsAnalyticsHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelCompletionResultsAnalyticsHelper& operator=(LevelCompletionResultsAnalyticsHelper&& o) noexcept = default;
  constexpr LevelCompletionResultsAnalyticsHelper& operator=(LevelCompletionResultsAnalyticsHelper const& o) noexcept = default;
                


// Methods

/// @brief Method FillEventData addr 0x20b123c size 0x800 virtual false final false
static void FillEventData(::GlobalNamespace::LevelCompletionResults levelCompletionResults, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> eventData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LevelCompletionResultsAnalyticsHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCompletionResultsAnalyticsHelper, "", "LevelCompletionResultsAnalyticsHelper");
