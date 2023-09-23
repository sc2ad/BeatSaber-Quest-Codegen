#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class RectTransform;
}
namespace GlobalNamespace {
class MultiplayerResultsTableCell;
}
namespace HMUI {
class HMUI__TableView__IDataSource;
}
namespace UnityEngine {
struct Quaternion;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace GlobalNamespace {
class MultiplayerOffsetPositionByLocalPlayerPosition;
}
namespace Zenject {
class DiContainer;
}
namespace HMUI {
class TableView;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace HMUI {
class TableCell;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1;
}
namespace GlobalNamespace {
class MultiplayerResultsTableView;
}
// Type: ::<>c__DisplayClass30_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5886))
// CS Name: MultiplayerResultsTableView::<>c__DisplayClass30_0
class CORDL_TYPE GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0(GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0(GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0& operator=(GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0& operator=(GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::RectTransform __declspec(property(get=__get_rectTransform, put=__set_rectTransform))  rectTransform;

constexpr void __set_rectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_rectTransform() const;

 GlobalNamespace::MultiplayerResultsTableCell __declspec(property(get=__get_cell, put=__set_cell))  cell;

constexpr void __set_cell(GlobalNamespace::MultiplayerResultsTableCell value) ;

constexpr GlobalNamespace::MultiplayerResultsTableCell __get_cell() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0() ;

/// @brief Method .ctor addr 0x218dfd4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <StartAnimation>b__0 addr 0x218e1a8 size 0x1c virtual false final false
 void _StartAnimation_b__0(UnityEngine::Vector2 val) ;

/// @brief Method <StartAnimation>b__2 addr 0x218e1c4 size 0x18 virtual false final false
 void _StartAnimation_b__2(float_t val) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass30_1
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5887))
// CS Name: MultiplayerResultsTableView::<>c__DisplayClass30_1
class CORDL_TYPE GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1(GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1(GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1& operator=(GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1& operator=(GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::RectTransform __declspec(property(get=__get_winnerRectTransform, put=__set_winnerRectTransform))  winnerRectTransform;

constexpr void __set_winnerRectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_winnerRectTransform() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1() ;

/// @brief Method .ctor addr 0x218dfdc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <StartAnimation>b__3 addr 0x218e1dc size 0x1c virtual false final false
 void _StartAnimation_b__3(UnityEngine::Vector2 val) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<PlayRandomRowSlideInSound>d__31
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5888))
// CS Name: MultiplayerResultsTableView::<PlayRandomRowSlideInSound>d__31
class CORDL_TYPE GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31(GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31(GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31& operator=(GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31& operator=(GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 float_t __declspec(property(get=__get_delay, put=__set_delay))  delay;

constexpr void __set_delay(float_t value) ;

constexpr float_t __get_delay() const;

 GlobalNamespace::MultiplayerResultsTableView __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MultiplayerResultsTableView value) ;

constexpr GlobalNamespace::MultiplayerResultsTableView __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31(int32_t __1__state) ;

/// @brief Method .ctor addr 0x218e05c size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x218e1f8 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x218e1fc size 0xf4 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x218e2f0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x218e2f8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x218e338 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<PlayAvatarSlideInSound>d__32
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5889))
// CS Name: MultiplayerResultsTableView::<PlayAvatarSlideInSound>d__32
class CORDL_TYPE GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32(GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32(GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32& operator=(GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32& operator=(GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 float_t __declspec(property(get=__get_delay, put=__set_delay))  delay;

constexpr void __set_delay(float_t value) ;

constexpr float_t __get_delay() const;

 GlobalNamespace::MultiplayerResultsTableView __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MultiplayerResultsTableView value) ;

constexpr GlobalNamespace::MultiplayerResultsTableView __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32(int32_t __1__state) ;

/// @brief Method .ctor addr 0x218e0fc size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x218e340 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x218e344 size 0xc4 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x218e408 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x218e410 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x218e450 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerResultsTableView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5890))
// CS Name: MultiplayerResultsTableView
class CORDL_TYPE MultiplayerResultsTableView : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _PlayAvatarSlideInSound_d__32 = GlobalNamespace::GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32;

using _PlayRandomRowSlideInSound_d__31 = GlobalNamespace::GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31;

using __c__DisplayClass30_1 = GlobalNamespace::GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1;

using __c__DisplayClass30_0 = GlobalNamespace::GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0;

/// @brief Convert operator to HMUI::HMUI__TableView__IDataSource
constexpr operator  HMUI::HMUI__TableView__IDataSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~MultiplayerResultsTableView() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsTableView", modifiers: " const&", def_value: None }]
constexpr MultiplayerResultsTableView(MultiplayerResultsTableView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsTableView", modifiers: "&&", def_value: None }]
constexpr MultiplayerResultsTableView(MultiplayerResultsTableView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerResultsTableView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerResultsTableView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerResultsTableView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerResultsTableView& operator=(MultiplayerResultsTableView&& o) noexcept = default;
  constexpr MultiplayerResultsTableView& operator=(MultiplayerResultsTableView const& o) noexcept = default;
                


// Fields

/// @brief Field kCellIdentifier offset 0
static constexpr ::ConstString  kCellIdentifier{u"Cell"};

 HMUI::TableView __declspec(property(get=__get__tableView, put=__set__tableView))  _tableView;

constexpr void __set__tableView(HMUI::TableView value) ;

constexpr HMUI::TableView __get__tableView() const;

 UnityEngine::RectTransform __declspec(property(get=__get__tableViewRectTransform, put=__set__tableViewRectTransform))  _tableViewRectTransform;

constexpr void __set__tableViewRectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__tableViewRectTransform() const;

 GlobalNamespace::MultiplayerResultsTableCell __declspec(property(get=__get__winnerTableCell, put=__set__winnerTableCell))  _winnerTableCell;

constexpr void __set__winnerTableCell(GlobalNamespace::MultiplayerResultsTableCell value) ;

constexpr GlobalNamespace::MultiplayerResultsTableCell __get__winnerTableCell() const;

 GlobalNamespace::MultiplayerResultsTableCell __declspec(property(get=__get__cellPrefab, put=__set__cellPrefab))  _cellPrefab;

constexpr void __set__cellPrefab(GlobalNamespace::MultiplayerResultsTableCell value) ;

constexpr GlobalNamespace::MultiplayerResultsTableCell __get__cellPrefab() const;

 float_t __declspec(property(get=__get__startRowXPosition, put=__set__startRowXPosition))  _startRowXPosition;

constexpr void __set__startRowXPosition(float_t value) ;

constexpr float_t __get__startRowXPosition() const;

 float_t __declspec(property(get=__get__rowHeight, put=__set__rowHeight))  _rowHeight;

constexpr void __set__rowHeight(float_t value) ;

constexpr float_t __get__rowHeight() const;

 float_t __declspec(property(get=__get__rowXOffset, put=__set__rowXOffset))  _rowXOffset;

constexpr void __set__rowXOffset(float_t value) ;

constexpr float_t __get__rowXOffset() const;

 float_t __declspec(property(get=__get__animationDuration, put=__set__animationDuration))  _animationDuration;

constexpr void __set__animationDuration(float_t value) ;

constexpr float_t __get__animationDuration() const;

 float_t __declspec(property(get=__get__animationSeparationTime, put=__set__animationSeparationTime))  _animationSeparationTime;

constexpr void __set__animationSeparationTime(float_t value) ;

constexpr float_t __get__animationSeparationTime() const;

 float_t __declspec(property(get=__get__winnerAnimationDuration, put=__set__winnerAnimationDuration))  _winnerAnimationDuration;

constexpr void __set__winnerAnimationDuration(float_t value) ;

constexpr float_t __get__winnerAnimationDuration() const;

 float_t __declspec(property(get=__get__duelTablePosXOffset, put=__set__duelTablePosXOffset))  _duelTablePosXOffset;

constexpr void __set__duelTablePosXOffset(float_t value) ;

constexpr float_t __get__duelTablePosXOffset() const;

 GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition __declspec(property(get=__get__multiplayerOffsetByLocalPlayerPosition, put=__set__multiplayerOffsetByLocalPlayerPosition))  _multiplayerOffsetByLocalPlayerPosition;

constexpr void __set__multiplayerOffsetByLocalPlayerPosition(GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition value) ;

constexpr GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition __get__multiplayerOffsetByLocalPlayerPosition() const;

 UnityEngine::AudioSource __declspec(property(get=__get__outroSfxAudioSource, put=__set__outroSfxAudioSource))  _outroSfxAudioSource;

constexpr void __set__outroSfxAudioSource(UnityEngine::AudioSource value) ;

constexpr UnityEngine::AudioSource __get__outroSfxAudioSource() const;

 ::ArrayW<UnityEngine::AudioClip> __declspec(property(get=__get__rowSlideAudioClips, put=__set__rowSlideAudioClips))  _rowSlideAudioClips;

constexpr void __set__rowSlideAudioClips(::ArrayW<UnityEngine::AudioClip> value) ;

constexpr ::ArrayW<UnityEngine::AudioClip> __get__rowSlideAudioClips() const;

 UnityEngine::AudioClip __declspec(property(get=__get__avatarSlideAudioClip, put=__set__avatarSlideAudioClip))  _avatarSlideAudioClip;

constexpr void __set__avatarSlideAudioClip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get__avatarSlideAudioClip() const;

 Tweening::TimeTweeningManager __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager))  _tweeningManager;

constexpr void __set__tweeningManager(Tweening::TimeTweeningManager value) ;

constexpr Tweening::TimeTweeningManager __get__tweeningManager() const;

 GlobalNamespace::MultiplayerLayoutProvider __declspec(property(get=__get__layoutProvider, put=__set__layoutProvider))  _layoutProvider;

constexpr void __set__layoutProvider(GlobalNamespace::MultiplayerLayoutProvider value) ;

constexpr GlobalNamespace::MultiplayerLayoutProvider __get__layoutProvider() const;

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData> __declspec(property(get=__get__dataList, put=__set__dataList))  _dataList;

constexpr void __set__dataList(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData> value) ;

constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData> __get__dataList() const;

 UnityEngine::Vector3 __declspec(property(get=__get__positionOffset, put=__set__positionOffset))  _positionOffset;

constexpr void __set__positionOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__positionOffset() const;

 UnityEngine::Quaternion __declspec(property(get=__get__rotationOffset, put=__set__rotationOffset))  _rotationOffset;

constexpr void __set__rotationOffset(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__rotationOffset() const;

 UnityEngine::Vector3 __declspec(property(get=__get__lastParentPosition, put=__set__lastParentPosition))  _lastParentPosition;

constexpr void __set__lastParentPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__lastParentPosition() const;

 UnityEngine::Quaternion __declspec(property(get=__get__lastParentRotation, put=__set__lastParentRotation))  _lastParentRotation;

constexpr void __set__lastParentRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__lastParentRotation() const;


// Methods

/// @brief Method CellSize addr 0x218cd78 size 0x8 virtual true final true
 float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x218cd80 size 0x68 virtual true final true
 int32_t NumberOfCells() ;

/// @brief Method Awake addr 0x218cde8 size 0x5c virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x218ce44 size 0x88 virtual false final false
 void OnDestroy() ;

/// @brief Method CellForIdx addr 0x218cecc size 0x458 virtual true final true
 HMUI::TableCell CellForIdx(HMUI::TableView tableView, int32_t idx) ;

/// @brief Method SetData addr 0x218d324 size 0x2a0 virtual false final false
 void SetData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData> dataList) ;

/// @brief Method StartAnimation addr 0x218d5c4 size 0xa10 virtual false final false
 float_t StartAnimation() ;

/// @brief Method PlayRandomRowSlideInSound addr 0x218dfe4 size 0x78 virtual false final false
 System::Collections::IEnumerator PlayRandomRowSlideInSound(float_t delay) ;

/// @brief Method PlayAvatarSlideInSound addr 0x218e084 size 0x78 virtual false final false
 System::Collections::IEnumerator PlayAvatarSlideInSound(float_t delay) ;

// Ctor Parameters []
explicit MultiplayerResultsTableView() ;

/// @brief Method .ctor addr 0x218e124 size 0x1c virtual false final false
 void _ctor() ;

/// @brief Method <StartAnimation>b__30_1 addr 0x218e140 size 0x28 virtual false final false
 void _StartAnimation_b__30_1() ;

/// @brief Method <StartAnimation>b__30_4 addr 0x218e168 size 0x28 virtual false final false
 void _StartAnimation_b__30_4() ;

/// @brief Method <StartAnimation>b__30_5 addr 0x218e190 size 0x18 virtual false final false
 void _StartAnimation_b__30_5(float_t val) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32, "", "MultiplayerResultsTableView/<PlayAvatarSlideInSound>d__32");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31, "", "MultiplayerResultsTableView/<PlayRandomRowSlideInSound>d__31");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0, "", "MultiplayerResultsTableView/<>c__DisplayClass30_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1, "", "MultiplayerResultsTableView/<>c__DisplayClass30_1");
NEED_NO_BOX(GlobalNamespace::MultiplayerResultsTableView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerResultsTableView, "", "MultiplayerResultsTableView");
