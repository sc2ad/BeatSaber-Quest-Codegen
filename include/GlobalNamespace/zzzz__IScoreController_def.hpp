#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class ScoringElement;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IScoreController;
}
// Type: ::IScoreController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5408))
// CS Name: IScoreController
class CORDL_TYPE IScoreController : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IScoreController() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IScoreController(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_multipliedScore))  multipliedScore;

 int32_t __declspec(property(get=get_modifiedScore))  modifiedScore;

 int32_t __declspec(property(get=get_immediateMaxPossibleMultipliedScore))  immediateMaxPossibleMultipliedScore;

 int32_t __declspec(property(get=get_immediateMaxPossibleModifiedScore))  immediateMaxPossibleModifiedScore;


// Methods

/// @brief Method add_scoreDidChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_scoreDidChangeEvent(::System::Action_2<int32_t,int32_t> value) ;

/// @brief Method remove_scoreDidChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_scoreDidChangeEvent(::System::Action_2<int32_t,int32_t> value) ;

/// @brief Method add_multiplierDidChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_multiplierDidChangeEvent(::System::Action_2<int32_t,float_t> value) ;

/// @brief Method remove_multiplierDidChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_multiplierDidChangeEvent(::System::Action_2<int32_t,float_t> value) ;

/// @brief Method add_scoringForNoteStartedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_scoringForNoteStartedEvent(::System::Action_1<::GlobalNamespace::ScoringElement> value) ;

/// @brief Method remove_scoringForNoteStartedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_scoringForNoteStartedEvent(::System::Action_1<::GlobalNamespace::ScoringElement> value) ;

/// @brief Method add_scoringForNoteFinishedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_scoringForNoteFinishedEvent(::System::Action_1<::GlobalNamespace::ScoringElement> value) ;

/// @brief Method remove_scoringForNoteFinishedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_scoringForNoteFinishedEvent(::System::Action_1<::GlobalNamespace::ScoringElement> value) ;

/// @brief Method get_multipliedScore addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_multipliedScore() ;

/// @brief Method get_modifiedScore addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_modifiedScore() ;

/// @brief Method get_immediateMaxPossibleMultipliedScore addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_immediateMaxPossibleMultipliedScore() ;

/// @brief Method get_immediateMaxPossibleModifiedScore addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_immediateMaxPossibleModifiedScore() ;

/// @brief Method SetEnabled addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetEnabled(bool enabled) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IScoreController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IScoreController, "", "IScoreController");
