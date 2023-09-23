#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class BaseResultsEnvironmentController;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword;
}
namespace GlobalNamespace {
class GlobalNamespace__ResultsEnvironmentManager____c__DisplayClass3_0;
}
namespace GlobalNamespace {
class ResultsEnvironmentManager;
}
// Type: ::ResultEnvironmentControllerWithKeyword
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4811))
// CS Name: ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword
class CORDL_TYPE GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword(GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword(GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword& operator=(GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword&& o) noexcept = default;
  constexpr GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword& operator=(GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__keyword, put=__set__keyword))  _keyword;

constexpr void __set__keyword(::StringW value) ;

constexpr ::StringW __get__keyword() const;

 GlobalNamespace::BaseResultsEnvironmentController __declspec(property(get=__get__resultsEnvironmentController, put=__set__resultsEnvironmentController))  _resultsEnvironmentController;

constexpr void __set__resultsEnvironmentController(GlobalNamespace::BaseResultsEnvironmentController value) ;

constexpr GlobalNamespace::BaseResultsEnvironmentController __get__resultsEnvironmentController() const;


// Properties

 ::StringW __declspec(property(get=get_keyword))  keyword;

 GlobalNamespace::BaseResultsEnvironmentController __declspec(property(get=get_resultsEnvironmentController))  resultsEnvironmentController;


// Methods

/// @brief Method get_keyword addr 0x222d074 size 0x8 virtual false final false
 ::StringW get_keyword() ;

/// @brief Method get_resultsEnvironmentController addr 0x222d07c size 0x8 virtual false final false
 GlobalNamespace::BaseResultsEnvironmentController get_resultsEnvironmentController() ;

// Ctor Parameters []
explicit GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword() ;

/// @brief Method .ctor addr 0x222d084 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass3_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4812))
// CS Name: ResultsEnvironmentManager::<>c__DisplayClass3_0
class CORDL_TYPE GlobalNamespace__ResultsEnvironmentManager____c__DisplayClass3_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__ResultsEnvironmentManager____c__DisplayClass3_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ResultsEnvironmentManager____c__DisplayClass3_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ResultsEnvironmentManager____c__DisplayClass3_0(GlobalNamespace__ResultsEnvironmentManager____c__DisplayClass3_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ResultsEnvironmentManager____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ResultsEnvironmentManager____c__DisplayClass3_0(GlobalNamespace__ResultsEnvironmentManager____c__DisplayClass3_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ResultsEnvironmentManager____c__DisplayClass3_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ResultsEnvironmentManager____c__DisplayClass3_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ResultsEnvironmentManager____c__DisplayClass3_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ResultsEnvironmentManager____c__DisplayClass3_0& operator=(GlobalNamespace__ResultsEnvironmentManager____c__DisplayClass3_0&& o) noexcept = default;
  constexpr GlobalNamespace__ResultsEnvironmentManager____c__DisplayClass3_0& operator=(GlobalNamespace__ResultsEnvironmentManager____c__DisplayClass3_0 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_keyword, put=__set_keyword))  keyword;

constexpr void __set_keyword(::StringW value) ;

constexpr ::StringW __get_keyword() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__ResultsEnvironmentManager____c__DisplayClass3_0() ;

/// @brief Method .ctor addr 0x222cf2c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetResultEnvironmentControllerForKeyword>b__0 addr 0x222d08c size 0x24 virtual false final false
 bool _GetResultEnvironmentControllerForKeyword_b__0(GlobalNamespace::GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword controllerWithKeyword) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ResultsEnvironmentManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4813))
// CS Name: ResultsEnvironmentManager
class CORDL_TYPE ResultsEnvironmentManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass3_0 = GlobalNamespace::GlobalNamespace__ResultsEnvironmentManager____c__DisplayClass3_0;

using ResultEnvironmentControllerWithKeyword = GlobalNamespace::GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ResultsEnvironmentManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResultsEnvironmentManager", modifiers: " const&", def_value: None }]
constexpr ResultsEnvironmentManager(ResultsEnvironmentManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResultsEnvironmentManager", modifiers: "&&", def_value: None }]
constexpr ResultsEnvironmentManager(ResultsEnvironmentManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResultsEnvironmentManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ResultsEnvironmentManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResultsEnvironmentManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResultsEnvironmentManager& operator=(ResultsEnvironmentManager&& o) noexcept = default;
  constexpr ResultsEnvironmentManager& operator=(ResultsEnvironmentManager const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword> __declspec(property(get=__get__resultEnvironmentControllersWithKeyword, put=__set__resultEnvironmentControllersWithKeyword))  _resultEnvironmentControllersWithKeyword;

constexpr void __set__resultEnvironmentControllersWithKeyword(::ArrayW<GlobalNamespace::GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword> __get__resultEnvironmentControllersWithKeyword() const;

 ::StringW __declspec(property(get=__get__currentShownKeyword, put=__set__currentShownKeyword))  _currentShownKeyword;

constexpr void __set__currentShownKeyword(::StringW value) ;

constexpr ::StringW __get__currentShownKeyword() const;


// Methods

/// @brief Method GetResultEnvironmentControllerForKeyword addr 0x222ce48 size 0xe4 virtual false final false
 GlobalNamespace::BaseResultsEnvironmentController GetResultEnvironmentControllerForKeyword(::StringW keyword) ;

/// @brief Method ShowResultForKeyword addr 0x222cf34 size 0xa4 virtual false final false
 void ShowResultForKeyword(::StringW keyword, bool immediately) ;

/// @brief Method HideResultForKeyword addr 0x222cfd8 size 0x94 virtual false final false
 void HideResultForKeyword(::StringW keyword, bool immediately) ;

// Ctor Parameters []
explicit ResultsEnvironmentManager() ;

/// @brief Method .ctor addr 0x222d06c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword, "", "ResultsEnvironmentManager/ResultEnvironmentControllerWithKeyword");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ResultsEnvironmentManager____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ResultsEnvironmentManager____c__DisplayClass3_0, "", "ResultsEnvironmentManager/<>c__DisplayClass3_0");
NEED_NO_BOX(GlobalNamespace::ResultsEnvironmentManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResultsEnvironmentManager, "", "ResultsEnvironmentManager");
