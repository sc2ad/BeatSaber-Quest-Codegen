#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class ICutScoreBufferDidChangeReceiver;
}
namespace GlobalNamespace {
class IReadonlyCutScoreBuffer;
}
namespace GlobalNamespace {
class SaberSwingRatingCounter;
}
namespace GlobalNamespace {
class ICutScoreBufferDidFinishReceiver;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class ISaberSwingRatingCounterDidChangeReceiver;
}
namespace GlobalNamespace {
class GlobalNamespace__ScoreModel__NoteScoreDefinition;
}
namespace GlobalNamespace {
class ISaberSwingRatingCounter;
}
namespace GlobalNamespace {
template<typename T>
class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
class ISaberSwingRatingCounterDidFinishReceiver;
}
// Forward declare root types
namespace GlobalNamespace {
class CutScoreBuffer;
}
// Type: ::CutScoreBuffer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5405))
// CS Name: CutScoreBuffer
class CORDL_TYPE CutScoreBuffer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IReadonlyCutScoreBuffer
constexpr operator  GlobalNamespace::IReadonlyCutScoreBuffer() const noexcept;

/// @brief Convert operator to GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver
constexpr operator  GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver() const noexcept;

/// @brief Convert operator to GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver
constexpr operator  GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~CutScoreBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "CutScoreBuffer", modifiers: " const&", def_value: None }]
constexpr CutScoreBuffer(CutScoreBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CutScoreBuffer", modifiers: "&&", def_value: None }]
constexpr CutScoreBuffer(CutScoreBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CutScoreBuffer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CutScoreBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CutScoreBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CutScoreBuffer& operator=(CutScoreBuffer&& o) noexcept = default;
  constexpr CutScoreBuffer& operator=(CutScoreBuffer const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SaberSwingRatingCounter __declspec(property(get=__get__saberSwingRatingCounter, put=__set__saberSwingRatingCounter))  _saberSwingRatingCounter;

constexpr void __set__saberSwingRatingCounter(GlobalNamespace::SaberSwingRatingCounter value) ;

constexpr GlobalNamespace::SaberSwingRatingCounter __get__saberSwingRatingCounter() const;

 GlobalNamespace::NoteCutInfo __declspec(property(get=__get__noteCutInfo, put=__set__noteCutInfo))  _noteCutInfo;

constexpr void __set__noteCutInfo(GlobalNamespace::NoteCutInfo value) ;

constexpr GlobalNamespace::NoteCutInfo __get__noteCutInfo() const;

 GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition __declspec(property(get=__get__noteScoreDefinition, put=__set__noteScoreDefinition))  _noteScoreDefinition;

constexpr void __set__noteScoreDefinition(GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition value) ;

constexpr GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition __get__noteScoreDefinition() const;

 int32_t __declspec(property(get=__get__afterCutScore, put=__set__afterCutScore))  _afterCutScore;

constexpr void __set__afterCutScore(int32_t value) ;

constexpr int32_t __get__afterCutScore() const;

 int32_t __declspec(property(get=__get__beforeCutScore, put=__set__beforeCutScore))  _beforeCutScore;

constexpr void __set__beforeCutScore(int32_t value) ;

constexpr int32_t __get__beforeCutScore() const;

 int32_t __declspec(property(get=__get__centerDistanceCutScore, put=__set__centerDistanceCutScore))  _centerDistanceCutScore;

constexpr void __set__centerDistanceCutScore(int32_t value) ;

constexpr int32_t __get__centerDistanceCutScore() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;

 bool __declspec(property(get=__get__isFinished, put=__set__isFinished))  _isFinished;

constexpr void __set__isFinished(bool value) ;

constexpr bool __get__isFinished() const;

 GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ICutScoreBufferDidFinishReceiver> __declspec(property(get=__get__didFinishEvent, put=__set__didFinishEvent))  _didFinishEvent;

constexpr void __set__didFinishEvent(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ICutScoreBufferDidFinishReceiver> value) ;

constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ICutScoreBufferDidFinishReceiver> __get__didFinishEvent() const;

 GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ICutScoreBufferDidChangeReceiver> __declspec(property(get=__get__didChangeEvent, put=__set__didChangeEvent))  _didChangeEvent;

constexpr void __set__didChangeEvent(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ICutScoreBufferDidChangeReceiver> value) ;

constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ICutScoreBufferDidChangeReceiver> __get__didChangeEvent() const;


// Properties

 int32_t __declspec(property(get=get_executionOrder))  executionOrder;

 int32_t __declspec(property(get=get_maxPossibleCutScore))  maxPossibleCutScore;

 bool __declspec(property(get=get_isFinished))  isFinished;

 int32_t __declspec(property(get=get_cutScore))  cutScore;

 int32_t __declspec(property(get=get_beforeCutScore))  beforeCutScore;

 int32_t __declspec(property(get=get_centerDistanceCutScore))  centerDistanceCutScore;

 int32_t __declspec(property(get=get_afterCutScore))  afterCutScore;

 GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition __declspec(property(get=get_noteScoreDefinition))  noteScoreDefinition;

 GlobalNamespace::NoteCutInfo __declspec(property(get=get_noteCutInfo))  noteCutInfo;

 float_t __declspec(property(get=get_beforeCutSwingRating))  beforeCutSwingRating;

 float_t __declspec(property(get=get_afterCutSwingRating))  afterCutSwingRating;


// Methods

/// @brief Method get_executionOrder addr 0x210d6a4 size 0x1c virtual false final false
 int32_t get_executionOrder() ;

/// @brief Method get_maxPossibleCutScore addr 0x210d6c0 size 0x1c virtual true final true
 int32_t get_maxPossibleCutScore() ;

/// @brief Method get_isFinished addr 0x210d6dc size 0x8 virtual true final true
 bool get_isFinished() ;

/// @brief Method get_cutScore addr 0x210d6e4 size 0x30 virtual true final true
 int32_t get_cutScore() ;

/// @brief Method get_beforeCutScore addr 0x210d714 size 0x8 virtual true final true
 int32_t get_beforeCutScore() ;

/// @brief Method get_centerDistanceCutScore addr 0x210d71c size 0x8 virtual true final true
 int32_t get_centerDistanceCutScore() ;

/// @brief Method get_afterCutScore addr 0x210d724 size 0x8 virtual true final true
 int32_t get_afterCutScore() ;

/// @brief Method get_noteScoreDefinition addr 0x210d72c size 0x8 virtual true final true
 GlobalNamespace::GlobalNamespace__ScoreModel__NoteScoreDefinition get_noteScoreDefinition() ;

/// @brief Method get_noteCutInfo addr 0x210d734 size 0x10 virtual true final true
 GlobalNamespace::NoteCutInfo get_noteCutInfo() ;

/// @brief Method get_beforeCutSwingRating addr 0x210d744 size 0x1c virtual true final true
 float_t get_beforeCutSwingRating() ;

/// @brief Method get_afterCutSwingRating addr 0x210d760 size 0x1c virtual true final true
 float_t get_afterCutSwingRating() ;

/// @brief Method RegisterDidChangeReceiver addr 0x210d77c size 0x58 virtual true final true
 void RegisterDidChangeReceiver(GlobalNamespace::ICutScoreBufferDidChangeReceiver receiver) ;

/// @brief Method RegisterDidFinishReceiver addr 0x210d7d4 size 0x58 virtual true final true
 void RegisterDidFinishReceiver(GlobalNamespace::ICutScoreBufferDidFinishReceiver receiver) ;

/// @brief Method UnregisterDidChangeReceiver addr 0x210d82c size 0x58 virtual true final true
 void UnregisterDidChangeReceiver(GlobalNamespace::ICutScoreBufferDidChangeReceiver receiver) ;

/// @brief Method UnregisterDidFinishReceiver addr 0x210d884 size 0x58 virtual true final true
 void UnregisterDidFinishReceiver(GlobalNamespace::ICutScoreBufferDidFinishReceiver receiver) ;

/// @brief Method Init addr 0x210d8dc size 0x264 virtual false final false
 bool Init(ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo) ;

/// @brief Method RefreshScores addr 0x210db40 size 0x208 virtual false final false
 void RefreshScores() ;

/// @brief Method HandleSaberSwingRatingCounterDidChange addr 0x210dd48 size 0x1d4 virtual true final true
 void HandleSaberSwingRatingCounterDidChange(GlobalNamespace::ISaberSwingRatingCounter swingRatingCounter, float_t rating) ;

/// @brief Method HandleSaberSwingRatingCounterDidFinish addr 0x210df1c size 0x2b8 virtual true final true
 void HandleSaberSwingRatingCounterDidFinish(GlobalNamespace::ISaberSwingRatingCounter swingRatingCounter) ;

static GlobalNamespace::CutScoreBuffer New_ctor() ;

/// @brief Method .ctor addr 0x210e1d4 size 0xf0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CutScoreBuffer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CutScoreBuffer, "", "CutScoreBuffer");
