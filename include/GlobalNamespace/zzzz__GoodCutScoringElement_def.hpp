#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ScoringElement_def.hpp"
#include <cstdint>
namespace GlobalNamespace {
class CutScoreBuffer;
}
namespace GlobalNamespace {
struct GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType;
}
namespace GlobalNamespace {
class ICutScoreBufferDidFinishReceiver;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class IReadonlyCutScoreBuffer;
}
namespace GlobalNamespace {
class GlobalNamespace__GoodCutScoringElement__Pool;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__GoodCutScoringElement__Pool;
}
namespace GlobalNamespace {
class GoodCutScoringElement;
}
// Type: ::GoodCutScoringElement
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5413))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5415))
// CS Name: GoodCutScoringElement
class CORDL_TYPE GoodCutScoringElement : public GlobalNamespace::ScoringElement {
public:
// Declarations
using Pool = GlobalNamespace::GlobalNamespace__GoodCutScoringElement__Pool;

/// @brief Convert operator to GlobalNamespace::ICutScoreBufferDidFinishReceiver
constexpr operator  GlobalNamespace::ICutScoreBufferDidFinishReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GoodCutScoringElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "GoodCutScoringElement", modifiers: " const&", def_value: None }]
constexpr GoodCutScoringElement(GoodCutScoringElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GoodCutScoringElement", modifiers: "&&", def_value: None }]
constexpr GoodCutScoringElement(GoodCutScoringElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GoodCutScoringElement(void* ptr) noexcept : GlobalNamespace::ScoringElement(ptr) {
}


  constexpr GoodCutScoringElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GoodCutScoringElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GoodCutScoringElement& operator=(GoodCutScoringElement&& o) noexcept = default;
  constexpr GoodCutScoringElement& operator=(GoodCutScoringElement const& o) noexcept = default;
                


// Fields

 GlobalNamespace::CutScoreBuffer __declspec(property(get=__get__cutScoreBuffer, put=__set__cutScoreBuffer))  _cutScoreBuffer;

constexpr void __set__cutScoreBuffer(GlobalNamespace::CutScoreBuffer value) ;

constexpr GlobalNamespace::CutScoreBuffer __get__cutScoreBuffer() const;

 GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType __declspec(property(get=__get__multiplierEventType, put=__set__multiplierEventType))  _multiplierEventType;

constexpr void __set__multiplierEventType(GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType value) ;

constexpr GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType __get__multiplierEventType() const;

 GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType __declspec(property(get=__get__wouldBeCorrectCutBestPossibleMultiplierEventType, put=__set__wouldBeCorrectCutBestPossibleMultiplierEventType))  _wouldBeCorrectCutBestPossibleMultiplierEventType;

constexpr void __set__wouldBeCorrectCutBestPossibleMultiplierEventType(GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType value) ;

constexpr GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType __get__wouldBeCorrectCutBestPossibleMultiplierEventType() const;


// Properties

 int32_t __declspec(property(get=get_cutScore))  cutScore;

 GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType __declspec(property(get=get_wouldBeCorrectCutBestPossibleMultiplierEventType))  wouldBeCorrectCutBestPossibleMultiplierEventType;

 GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType __declspec(property(get=get_multiplierEventType))  multiplierEventType;

 GlobalNamespace::IReadonlyCutScoreBuffer __declspec(property(get=get_cutScoreBuffer))  cutScoreBuffer;

 int32_t __declspec(property(get=get_executionOrder))  executionOrder;


// Methods

/// @brief Method get_cutScore addr 0x2110188 size 0x40 virtual true final false
 int32_t get_cutScore() ;

/// @brief Method get_wouldBeCorrectCutBestPossibleMultiplierEventType addr 0x21101c8 size 0x8 virtual true final false
 GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType get_wouldBeCorrectCutBestPossibleMultiplierEventType() ;

/// @brief Method get_multiplierEventType addr 0x21101d0 size 0x8 virtual true final false
 GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType get_multiplierEventType() ;

/// @brief Method get_cutScoreBuffer addr 0x21101d8 size 0x8 virtual false final false
 GlobalNamespace::IReadonlyCutScoreBuffer get_cutScoreBuffer() ;

/// @brief Method get_executionOrder addr 0x21101e0 size 0x24 virtual true final false
 int32_t get_executionOrder() ;

/// @brief Method Reinitialize addr 0x2110204 size 0x18 virtual true final false
 void Reinitialize() ;

/// @brief Method Init addr 0x210fc40 size 0x70 virtual false final false
 void Init(GlobalNamespace::NoteCutInfo noteCutInfo) ;

/// @brief Method HandleCutScoreBufferDidFinish addr 0x211021c size 0x24 virtual true final true
 void HandleCutScoreBufferDidFinish(GlobalNamespace::CutScoreBuffer cutScoreBuffer) ;

static GlobalNamespace::GoodCutScoringElement New_ctor() ;

/// @brief Method .ctor addr 0x2110240 size 0x64 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5412)), TypeDefinitionIndex(TypeDefinitionIndex(5415)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5412), inst: 2710 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5414))
// CS Name: GoodCutScoringElement::Pool
class CORDL_TYPE GlobalNamespace__GoodCutScoringElement__Pool : public GlobalNamespace::GlobalNamespace__ScoringElement__Pool_1<GlobalNamespace::GoodCutScoringElement> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__GoodCutScoringElement__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GoodCutScoringElement__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GoodCutScoringElement__Pool(GlobalNamespace__GoodCutScoringElement__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GoodCutScoringElement__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GoodCutScoringElement__Pool(GlobalNamespace__GoodCutScoringElement__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GoodCutScoringElement__Pool(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__ScoringElement__Pool_1<GlobalNamespace::GoodCutScoringElement>(ptr) {
}


  constexpr GlobalNamespace__GoodCutScoringElement__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GoodCutScoringElement__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GoodCutScoringElement__Pool& operator=(GlobalNamespace__GoodCutScoringElement__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__GoodCutScoringElement__Pool& operator=(GlobalNamespace__GoodCutScoringElement__Pool const& o) noexcept = default;
                


// Methods

static GlobalNamespace::GlobalNamespace__GoodCutScoringElement__Pool New_ctor() ;

/// @brief Method .ctor addr 0x21102a4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GoodCutScoringElement__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GoodCutScoringElement__Pool, "", "GoodCutScoringElement/Pool");
NEED_NO_BOX(GlobalNamespace::GoodCutScoringElement);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GoodCutScoringElement, "", "GoodCutScoringElement");
