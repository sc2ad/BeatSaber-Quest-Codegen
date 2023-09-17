#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System {
template<typename T>
class IComparable_1;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__ScoringElement__Pool_1;
}
namespace GlobalNamespace {
class ScoringElement;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ____GlobalNamespace__ScoringElement__Pool_1<T>;
}
// Type: ::Pool`1
// Type: ::ScoringElement
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5413))
// CS Name: ScoringElement
class CORDL_TYPE ScoringElement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using Pool_1 = ::GlobalNamespace::____GlobalNamespace__ScoringElement__Pool_1<T>;

/// @brief Convert operator to ::System::IComparable_1<::GlobalNamespace::ScoringElement>
constexpr operator  ::System::IComparable_1<::GlobalNamespace::ScoringElement>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ScoringElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScoringElement", modifiers: " const&", def_value: None }]
constexpr ScoringElement(ScoringElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScoringElement", modifiers: "&&", def_value: None }]
constexpr ScoringElement(ScoringElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScoringElement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ScoringElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScoringElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScoringElement& operator=(ScoringElement&& o) noexcept = default;
  constexpr ScoringElement& operator=(ScoringElement const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::NoteData __declspec(property(get=__get__noteData_k__BackingField, put=__set__noteData_k__BackingField))  _noteData_k__BackingField;

constexpr void __set__noteData_k__BackingField(::GlobalNamespace::NoteData value) ;

constexpr ::GlobalNamespace::NoteData __get__noteData_k__BackingField() const;

 int32_t __declspec(property(get=__get__multiplier_k__BackingField, put=__set__multiplier_k__BackingField))  _multiplier_k__BackingField;

constexpr void __set__multiplier_k__BackingField(int32_t value) ;

constexpr int32_t __get__multiplier_k__BackingField() const;

 int32_t __declspec(property(get=__get__maxMultiplier_k__BackingField, put=__set__maxMultiplier_k__BackingField))  _maxMultiplier_k__BackingField;

constexpr void __set__maxMultiplier_k__BackingField(int32_t value) ;

constexpr int32_t __get__maxMultiplier_k__BackingField() const;

 bool __declspec(property(get=__get__isFinished_k__BackingField, put=__set__isFinished_k__BackingField))  _isFinished_k__BackingField;

constexpr void __set__isFinished_k__BackingField(bool value) ;

constexpr bool __get__isFinished_k__BackingField() const;


// Properties

 ::GlobalNamespace::NoteData __declspec(property(get=get_noteData, put=set_noteData))  noteData;

 int32_t __declspec(property(get=get_maxPossibleCutScore))  maxPossibleCutScore;

 float_t __declspec(property(get=get_time))  time;

 int32_t __declspec(property(get=get_multiplier, put=set_multiplier))  multiplier;

 int32_t __declspec(property(get=get_maxMultiplier, put=set_maxMultiplier))  maxMultiplier;

 int32_t __declspec(property(get=get_cutScore))  cutScore;

 ::GlobalNamespace::____GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType __declspec(property(get=get_wouldBeCorrectCutBestPossibleMultiplierEventType))  wouldBeCorrectCutBestPossibleMultiplierEventType;

 ::GlobalNamespace::____GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType __declspec(property(get=get_multiplierEventType))  multiplierEventType;

 bool __declspec(property(get=get_isFinished, put=set_isFinished))  isFinished;

 int32_t __declspec(property(get=get_executionOrder))  executionOrder;


// Methods

/// @brief Method get_noteData addr 0x21100b0 size 0x8 virtual false final false
 ::GlobalNamespace::NoteData get_noteData() ;

/// @brief Method set_noteData addr 0x21100b8 size 0x8 virtual false final false
 void set_noteData(::GlobalNamespace::NoteData value) ;

/// @brief Method get_maxPossibleCutScore addr 0x210f7c4 size 0x74 virtual false final false
 int32_t get_maxPossibleCutScore() ;

/// @brief Method get_time addr 0x210f6f0 size 0x1c virtual false final false
 float_t get_time() ;

/// @brief Method get_multiplier addr 0x21100c0 size 0x8 virtual false final false
 int32_t get_multiplier() ;

/// @brief Method set_multiplier addr 0x21100c8 size 0x8 virtual false final false
 void set_multiplier(int32_t value) ;

/// @brief Method get_maxMultiplier addr 0x21100d0 size 0x8 virtual false final false
 int32_t get_maxMultiplier() ;

/// @brief Method set_maxMultiplier addr 0x21100d8 size 0x8 virtual false final false
 void set_maxMultiplier(int32_t value) ;

/// @brief Method get_cutScore addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_cutScore() ;

/// @brief Method get_wouldBeCorrectCutBestPossibleMultiplierEventType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::____GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType get_wouldBeCorrectCutBestPossibleMultiplierEventType() ;

/// @brief Method get_multiplierEventType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::____GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType get_multiplierEventType() ;

/// @brief Method get_isFinished addr 0x21100e0 size 0x8 virtual false final false
 bool get_isFinished() ;

/// @brief Method set_isFinished addr 0x21100e8 size 0xc virtual false final false
 void set_isFinished(bool value) ;

/// @brief Method get_executionOrder addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_executionOrder() ;

/// @brief Method CompareTo addr 0x21100f4 size 0x88 virtual true final true
 int32_t CompareTo(::GlobalNamespace::ScoringElement other) ;

/// @brief Method SetMultipliers addr 0x210f7a8 size 0x8 virtual false final false
 void SetMultipliers(int32_t multiplier, int32_t maxMultiplier) ;

/// @brief Method Reinitialize addr 0x211017c size 0x4 virtual true final false
 void Reinitialize() ;

// Ctor Parameters []
explicit ScoringElement() ;

/// @brief Method .ctor addr 0x2110180 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5412)), TypeDefinitionIndex(TypeDefinitionIndex(10980)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10980), inst: 2653 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5412), inst: 2 })
// CS Name: ScoringElement::Pool`1
class CORDL_TYPE ____GlobalNamespace__ScoringElement__Pool_1<T> : public ::Zenject::MemoryPool_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____GlobalNamespace__ScoringElement__Pool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ScoringElement__Pool_1", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ScoringElement__Pool_1(____GlobalNamespace__ScoringElement__Pool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ScoringElement__Pool_1", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ScoringElement__Pool_1(____GlobalNamespace__ScoringElement__Pool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ScoringElement__Pool_1(void* ptr) noexcept : ::Zenject::MemoryPool_1<T>(ptr) {
}


  constexpr ____GlobalNamespace__ScoringElement__Pool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ScoringElement__Pool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ScoringElement__Pool_1& operator=(____GlobalNamespace__ScoringElement__Pool_1&& o) noexcept = default;
  constexpr ____GlobalNamespace__ScoringElement__Pool_1& operator=(____GlobalNamespace__ScoringElement__Pool_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Reinitialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reinitialize(T scoringElement) ;

// Ctor Parameters []
explicit ____GlobalNamespace__ScoringElement__Pool_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__ScoringElement__Pool_1, "", "ScoringElement/Pool`1");
NEED_NO_BOX(::GlobalNamespace::ScoringElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoringElement, "", "ScoringElement");
