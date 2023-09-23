#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTraits_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class UxmlChildElementDescription;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UxmlStyleTraits___get_uxmlChildElementsDescription_d__4;
}
namespace UnityEngine::UIElements {
class UxmlStyleTraits;
}
// Type: ::<get_uxmlChildElementsDescription>d__4
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7061))
// CS Name: UnityEngine.UIElements.UxmlStyleTraits::<get_uxmlChildElementsDescription>d__4
class CORDL_TYPE UnityEngine__UIElements__UxmlStyleTraits___get_uxmlChildElementsDescription_d__4 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__UxmlStyleTraits___get_uxmlChildElementsDescription_d__4() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UxmlStyleTraits___get_uxmlChildElementsDescription_d__4", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UxmlStyleTraits___get_uxmlChildElementsDescription_d__4(UnityEngine__UIElements__UxmlStyleTraits___get_uxmlChildElementsDescription_d__4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UxmlStyleTraits___get_uxmlChildElementsDescription_d__4", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UxmlStyleTraits___get_uxmlChildElementsDescription_d__4(UnityEngine__UIElements__UxmlStyleTraits___get_uxmlChildElementsDescription_d__4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UxmlStyleTraits___get_uxmlChildElementsDescription_d__4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UxmlStyleTraits___get_uxmlChildElementsDescription_d__4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UxmlStyleTraits___get_uxmlChildElementsDescription_d__4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UxmlStyleTraits___get_uxmlChildElementsDescription_d__4& operator=(UnityEngine__UIElements__UxmlStyleTraits___get_uxmlChildElementsDescription_d__4&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UxmlStyleTraits___get_uxmlChildElementsDescription_d__4& operator=(UnityEngine__UIElements__UxmlStyleTraits___get_uxmlChildElementsDescription_d__4 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 UnityEngine::UIElements::UxmlChildElementDescription __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(UnityEngine::UIElements::UxmlChildElementDescription value) ;

constexpr UnityEngine::UIElements::UxmlChildElementDescription __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 UnityEngine::UIElements::UxmlStyleTraits __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::UIElements::UxmlStyleTraits value) ;

constexpr UnityEngine::UIElements::UxmlStyleTraits __get___4__this() const;


// Properties

 UnityEngine::UIElements::UxmlChildElementDescription __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__UIElements__UxmlStyleTraits___get_uxmlChildElementsDescription_d__4(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2c95b60 size 0x44 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2c95ca0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2c95ca4 size 0x18 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.UxmlChildElementDescription>.get_Current addr 0x2c95cbc size 0x8 virtual true final true
 UnityEngine::UIElements::UxmlChildElementDescription System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2c95cc4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2c95d04 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.UxmlChildElementDescription>.GetEnumerator addr 0x2c95d0c size 0xa0 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription> System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlChildElementDescription__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2c95dac size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::UxmlStyleTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7087))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7062))
// CS Name: UnityEngine.UIElements.UxmlStyleTraits
class CORDL_TYPE UxmlStyleTraits : public UnityEngine::UIElements::UxmlTraits {
public:
// Declarations
using _get_uxmlChildElementsDescription_d__4 = UnityEngine::UIElements::UnityEngine__UIElements__UxmlStyleTraits___get_uxmlChildElementsDescription_d__4;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UxmlStyleTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlStyleTraits", modifiers: " const&", def_value: None }]
constexpr UxmlStyleTraits(UxmlStyleTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlStyleTraits", modifiers: "&&", def_value: None }]
constexpr UxmlStyleTraits(UxmlStyleTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UxmlStyleTraits(void* ptr) noexcept : UnityEngine::UIElements::UxmlTraits(ptr) {
}


  constexpr UxmlStyleTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UxmlStyleTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UxmlStyleTraits& operator=(UxmlStyleTraits&& o) noexcept = default;
  constexpr UxmlStyleTraits& operator=(UxmlStyleTraits const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_Name() const;

 UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_Path, put=__set_m_Path))  m_Path;

constexpr void __set_m_Path(UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_Path() const;

 UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_Src, put=__set_m_Src))  m_Src;

constexpr void __set_m_Src(UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_Src() const;


// Properties

 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> __declspec(property(get=get_uxmlChildElementsDescription))  uxmlChildElementsDescription;


// Methods

/// @brief Method get_uxmlChildElementsDescription addr 0x2c95afc size 0x64 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> get_uxmlChildElementsDescription() ;

// Ctor Parameters []
explicit UxmlStyleTraits() ;

/// @brief Method .ctor addr 0x2c95ba4 size 0xfc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__UxmlStyleTraits___get_uxmlChildElementsDescription_d__4);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__UxmlStyleTraits___get_uxmlChildElementsDescription_d__4, "UnityEngine.UIElements", "UxmlStyleTraits/<get_uxmlChildElementsDescription>d__4");
NEED_NO_BOX(UnityEngine::UIElements::UxmlStyleTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UxmlStyleTraits, "UnityEngine.UIElements", "UxmlStyleTraits");
