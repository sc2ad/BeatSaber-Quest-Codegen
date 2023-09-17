#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class ICutScoreBufferDidFinishReceiver;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class ICutScoreBufferDidChangeReceiver;
}
namespace GlobalNamespace {
class ____GlobalNamespace__ScoreModel__NoteScoreDefinition;
}
// Forward declare root types
namespace GlobalNamespace {
class IReadonlyCutScoreBuffer;
}
// Type: ::IReadonlyCutScoreBuffer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5404))
// CS Name: IReadonlyCutScoreBuffer
class CORDL_TYPE IReadonlyCutScoreBuffer : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IReadonlyCutScoreBuffer() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IReadonlyCutScoreBuffer(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_maxPossibleCutScore))  maxPossibleCutScore;

 int32_t __declspec(property(get=get_cutScore))  cutScore;

 int32_t __declspec(property(get=get_beforeCutScore))  beforeCutScore;

 int32_t __declspec(property(get=get_centerDistanceCutScore))  centerDistanceCutScore;

 int32_t __declspec(property(get=get_afterCutScore))  afterCutScore;

 bool __declspec(property(get=get_isFinished))  isFinished;

 ::GlobalNamespace::____GlobalNamespace__ScoreModel__NoteScoreDefinition __declspec(property(get=get_noteScoreDefinition))  noteScoreDefinition;

 ::GlobalNamespace::NoteCutInfo __declspec(property(get=get_noteCutInfo))  noteCutInfo;

 float_t __declspec(property(get=get_beforeCutSwingRating))  beforeCutSwingRating;

 float_t __declspec(property(get=get_afterCutSwingRating))  afterCutSwingRating;


// Methods

/// @brief Method get_maxPossibleCutScore addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_maxPossibleCutScore() ;

/// @brief Method get_cutScore addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_cutScore() ;

/// @brief Method get_beforeCutScore addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_beforeCutScore() ;

/// @brief Method get_centerDistanceCutScore addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_centerDistanceCutScore() ;

/// @brief Method get_afterCutScore addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_afterCutScore() ;

/// @brief Method get_isFinished addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isFinished() ;

/// @brief Method get_noteScoreDefinition addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::____GlobalNamespace__ScoreModel__NoteScoreDefinition get_noteScoreDefinition() ;

/// @brief Method get_noteCutInfo addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::NoteCutInfo get_noteCutInfo() ;

/// @brief Method get_beforeCutSwingRating addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_beforeCutSwingRating() ;

/// @brief Method get_afterCutSwingRating addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_afterCutSwingRating() ;

/// @brief Method RegisterDidChangeReceiver addr 0x0 size 0xffffffffffffffff virtual true final false
 void RegisterDidChangeReceiver(::GlobalNamespace::ICutScoreBufferDidChangeReceiver receiver) ;

/// @brief Method RegisterDidFinishReceiver addr 0x0 size 0xffffffffffffffff virtual true final false
 void RegisterDidFinishReceiver(::GlobalNamespace::ICutScoreBufferDidFinishReceiver receiver) ;

/// @brief Method UnregisterDidChangeReceiver addr 0x0 size 0xffffffffffffffff virtual true final false
 void UnregisterDidChangeReceiver(::GlobalNamespace::ICutScoreBufferDidChangeReceiver receiver) ;

/// @brief Method UnregisterDidFinishReceiver addr 0x0 size 0xffffffffffffffff virtual true final false
 void UnregisterDidFinishReceiver(::GlobalNamespace::ICutScoreBufferDidFinishReceiver receiver) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IReadonlyCutScoreBuffer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IReadonlyCutScoreBuffer, "", "IReadonlyCutScoreBuffer");
