#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct Touch;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem::LowLevel {
template<typename TValue>
class InputStateHistory_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
class Finger;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::EnhancedTouch {
class UnityEngine__InputSystem__EnhancedTouch__TouchHistory__Enumerator;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct TouchHistory;
}
// Type: ::Enumerator
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6503))
// CS Name: UnityEngine.InputSystem.EnhancedTouch.TouchHistory::Enumerator
class CORDL_TYPE UnityEngine__InputSystem__EnhancedTouch__TouchHistory__Enumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::EnhancedTouch::Touch>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::EnhancedTouch::Touch>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~UnityEngine__InputSystem__EnhancedTouch__TouchHistory__Enumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__EnhancedTouch__TouchHistory__Enumerator", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__EnhancedTouch__TouchHistory__Enumerator(UnityEngine__InputSystem__EnhancedTouch__TouchHistory__Enumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__EnhancedTouch__TouchHistory__Enumerator", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__EnhancedTouch__TouchHistory__Enumerator(UnityEngine__InputSystem__EnhancedTouch__TouchHistory__Enumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__EnhancedTouch__TouchHistory__Enumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__EnhancedTouch__TouchHistory__Enumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__EnhancedTouch__TouchHistory__Enumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__EnhancedTouch__TouchHistory__Enumerator& operator=(UnityEngine__InputSystem__EnhancedTouch__TouchHistory__Enumerator&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__EnhancedTouch__TouchHistory__Enumerator& operator=(UnityEngine__InputSystem__EnhancedTouch__TouchHistory__Enumerator const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::EnhancedTouch::TouchHistory __declspec(property(get=__get_m_Owner, put=__set_m_Owner))  m_Owner;

constexpr void __set_m_Owner(UnityEngine::InputSystem::EnhancedTouch::TouchHistory value) ;

constexpr UnityEngine::InputSystem::EnhancedTouch::TouchHistory __get_m_Owner() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::InputSystem::EnhancedTouch::Touch __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "owner", ty: "UnityEngine::InputSystem::EnhancedTouch::TouchHistory", modifiers: "", def_value: None }]
explicit UnityEngine__InputSystem__EnhancedTouch__TouchHistory__Enumerator(UnityEngine::InputSystem::EnhancedTouch::TouchHistory owner) ;

/// @brief Method .ctor addr 0x2950f2c size 0x34 virtual false final false
 void _ctor(UnityEngine::InputSystem::EnhancedTouch::TouchHistory owner) ;

/// @brief Method MoveNext addr 0x2951144 size 0x2c virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x2951170 size 0xc virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x295117c size 0x40 virtual true final true
 UnityEngine::InputSystem::EnhancedTouch::Touch get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x29511bc size 0x7c virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x2951238 size 0x4 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::EnhancedTouch
// Type: UnityEngine.InputSystem.EnhancedTouch::TouchHistory
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6504))
// CS Name: UnityEngine.InputSystem.EnhancedTouch.TouchHistory
struct CORDL_TYPE TouchHistory : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__TouchHistory__Enumerator;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::EnhancedTouch::Touch>
constexpr operator  System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::EnhancedTouch::Touch>() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::EnhancedTouch::Touch>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::EnhancedTouch::Touch>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::EnhancedTouch::Touch>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::EnhancedTouch::Touch>() const;

// Ctor Parameters [CppParam { name: "m_History", ty: "UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState>", modifiers: "", def_value: None }, CppParam { name: "m_Finger", ty: "UnityEngine::InputSystem::EnhancedTouch::Finger", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr TouchHistory(UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> m_History, UnityEngine::InputSystem::EnhancedTouch::Finger m_Finger, int32_t m_Count, int32_t m_StartIndex, uint32_t m_Version) noexcept;


                    constexpr TouchHistory(TouchHistory const&) = default;
                    constexpr TouchHistory(TouchHistory&&) = default;
                    constexpr TouchHistory& operator=(TouchHistory const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TouchHistory& operator=(TouchHistory&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TouchHistory(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> __declspec(property(get=__get_m_History, put=__set_m_History))  m_History;

constexpr void __set_m_History(UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> __get_m_History() const;

 UnityEngine::InputSystem::EnhancedTouch::Finger __declspec(property(get=__get_m_Finger, put=__set_m_Finger))  m_Finger;

constexpr void __set_m_Finger(UnityEngine::InputSystem::EnhancedTouch::Finger value) ;

constexpr UnityEngine::InputSystem::EnhancedTouch::Finger __get_m_Finger() const;

 int32_t __declspec(property(get=__get_m_Count, put=__set_m_Count))  m_Count;

constexpr void __set_m_Count(int32_t value) ;

constexpr int32_t __get_m_Count() const;

 int32_t __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex))  m_StartIndex;

constexpr void __set_m_StartIndex(int32_t value) ;

constexpr int32_t __get_m_StartIndex() const;

 uint32_t __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(uint32_t value) ;

constexpr uint32_t __get_m_Version() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 UnityEngine::InputSystem::EnhancedTouch::Touch __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method .ctor addr 0x294e4a0 size 0x3c virtual false final false
 void _ctor(UnityEngine::InputSystem::EnhancedTouch::Finger finger, UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> history, int32_t startIndex, int32_t count) ;

/// @brief Method GetEnumerator addr 0x2950eac size 0x80 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::EnhancedTouch::Touch> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2950f60 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_Count addr 0x2950f64 size 0x8 virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x2950f6c size 0x13c virtual true final true
 UnityEngine::InputSystem::EnhancedTouch::Touch get_Item(int32_t index) ;

/// @brief Method CheckValid addr 0x29510a8 size 0x9c virtual false final false
 void CheckValid() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::EnhancedTouch
NEED_NO_BOX(UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__TouchHistory__Enumerator);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__TouchHistory__Enumerator, "UnityEngine.InputSystem.EnhancedTouch", "TouchHistory/Enumerator");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::EnhancedTouch::TouchHistory, "UnityEngine.InputSystem.EnhancedTouch", "TouchHistory");
