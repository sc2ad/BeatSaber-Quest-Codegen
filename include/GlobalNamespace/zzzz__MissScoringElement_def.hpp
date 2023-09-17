#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ScoringElement_def.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType;
}
namespace GlobalNamespace {
class NoteData;
}
// Forward declare root types
namespace GlobalNamespace {
class MissScoringElement;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MissScoringElement__Pool;
}
// Type: ::MissScoringElement
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5413))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5419))
// CS Name: MissScoringElement
class CORDL_TYPE MissScoringElement : public ::GlobalNamespace::ScoringElement {
public:
// Declarations
using Pool = ::GlobalNamespace::____GlobalNamespace__MissScoringElement__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MissScoringElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissScoringElement", modifiers: " const&", def_value: None }]
constexpr MissScoringElement(MissScoringElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissScoringElement", modifiers: "&&", def_value: None }]
constexpr MissScoringElement(MissScoringElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissScoringElement(void* ptr) noexcept : ::GlobalNamespace::ScoringElement(ptr) {
}


  constexpr MissScoringElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissScoringElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissScoringElement& operator=(MissScoringElement&& o) noexcept = default;
  constexpr MissScoringElement& operator=(MissScoringElement const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType __declspec(property(get=__get__multiplierEventType, put=__set__multiplierEventType))  _multiplierEventType;

constexpr void __set__multiplierEventType(::GlobalNamespace::____GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType __get__multiplierEventType() const;

 ::GlobalNamespace::____GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType __declspec(property(get=__get__wouldBeCorrectCutBestPossibleMultiplierEventType, put=__set__wouldBeCorrectCutBestPossibleMultiplierEventType))  _wouldBeCorrectCutBestPossibleMultiplierEventType;

constexpr void __set__wouldBeCorrectCutBestPossibleMultiplierEventType(::GlobalNamespace::____GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType __get__wouldBeCorrectCutBestPossibleMultiplierEventType() const;


// Properties

 int32_t __declspec(property(get=get_cutScore))  cutScore;

 ::GlobalNamespace::____GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType __declspec(property(get=get_wouldBeCorrectCutBestPossibleMultiplierEventType))  wouldBeCorrectCutBestPossibleMultiplierEventType;

 ::GlobalNamespace::____GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType __declspec(property(get=get_multiplierEventType))  multiplierEventType;

 int32_t __declspec(property(get=get_executionOrder))  executionOrder;


// Methods

/// @brief Method get_cutScore addr 0x2110360 size 0x8 virtual true final false
 int32_t get_cutScore() ;

/// @brief Method get_wouldBeCorrectCutBestPossibleMultiplierEventType addr 0x2110368 size 0x8 virtual true final false
 ::GlobalNamespace::____GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType get_wouldBeCorrectCutBestPossibleMultiplierEventType() ;

/// @brief Method get_multiplierEventType addr 0x2110370 size 0x8 virtual true final false
 ::GlobalNamespace::____GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType get_multiplierEventType() ;

/// @brief Method get_executionOrder addr 0x2110378 size 0xc virtual true final false
 int32_t get_executionOrder() ;

/// @brief Method Init addr 0x210fe30 size 0x4c virtual false final false
 void Init(::GlobalNamespace::NoteData noteData) ;

// Ctor Parameters []
explicit MissScoringElement() ;

/// @brief Method .ctor addr 0x2110384 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5412)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5412), inst: 2714 }), TypeDefinitionIndex(TypeDefinitionIndex(5419))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5418))
// CS Name: MissScoringElement::Pool
class CORDL_TYPE ____GlobalNamespace__MissScoringElement__Pool : public ::GlobalNamespace::____GlobalNamespace__ScoringElement__Pool_1<::GlobalNamespace::MissScoringElement> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____GlobalNamespace__MissScoringElement__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MissScoringElement__Pool", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MissScoringElement__Pool(____GlobalNamespace__MissScoringElement__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MissScoringElement__Pool", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MissScoringElement__Pool(____GlobalNamespace__MissScoringElement__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MissScoringElement__Pool(void* ptr) noexcept : ::GlobalNamespace::____GlobalNamespace__ScoringElement__Pool_1<::GlobalNamespace::MissScoringElement>(ptr) {
}


  constexpr ____GlobalNamespace__MissScoringElement__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MissScoringElement__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MissScoringElement__Pool& operator=(____GlobalNamespace__MissScoringElement__Pool&& o) noexcept = default;
  constexpr ____GlobalNamespace__MissScoringElement__Pool& operator=(____GlobalNamespace__MissScoringElement__Pool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MissScoringElement__Pool() ;

/// @brief Method .ctor addr 0x211038c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MissScoringElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissScoringElement, "", "MissScoringElement");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MissScoringElement__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MissScoringElement__Pool, "", "MissScoringElement/Pool");