#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class WingedEdgeEnumerator;
}
// Type: UnityEngine.ProBuilder::WingedEdgeEnumerator
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12165))
// CS Name: UnityEngine.ProBuilder.WingedEdgeEnumerator
class CORDL_TYPE WingedEdgeEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::ProBuilder::WingedEdge>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::ProBuilder::WingedEdge>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~WingedEdgeEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "WingedEdgeEnumerator", modifiers: " const&", def_value: None }]
constexpr WingedEdgeEnumerator(WingedEdgeEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WingedEdgeEnumerator", modifiers: "&&", def_value: None }]
constexpr WingedEdgeEnumerator(WingedEdgeEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WingedEdgeEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WingedEdgeEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WingedEdgeEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WingedEdgeEnumerator& operator=(WingedEdgeEnumerator&& o) noexcept = default;
  constexpr WingedEdgeEnumerator& operator=(WingedEdgeEnumerator const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::WingedEdge __declspec(property(get=__get_m_Start, put=__set_m_Start))  m_Start;

constexpr void __set_m_Start(UnityEngine::ProBuilder::WingedEdge value) ;

constexpr UnityEngine::ProBuilder::WingedEdge __get_m_Start() const;

 UnityEngine::ProBuilder::WingedEdge __declspec(property(get=__get_m_Current, put=__set_m_Current))  m_Current;

constexpr void __set_m_Current(UnityEngine::ProBuilder::WingedEdge value) ;

constexpr UnityEngine::ProBuilder::WingedEdge __get_m_Current() const;


// Properties

 UnityEngine::ProBuilder::WingedEdge __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "start", ty: "UnityEngine::ProBuilder::WingedEdge", modifiers: "", def_value: None }]
explicit WingedEdgeEnumerator(UnityEngine::ProBuilder::WingedEdge start) ;

/// @brief Method .ctor addr 0x29f1368 size 0x28 virtual false final false
 void _ctor(UnityEngine::ProBuilder::WingedEdge start) ;

/// @brief Method MoveNext addr 0x29f1390 size 0x3c virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x29f13cc size 0x8 virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x29f13d4 size 0x8 virtual true final true
 UnityEngine::ProBuilder::WingedEdge get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x29f13dc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x29f13e4 size 0x4 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::WingedEdgeEnumerator);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::WingedEdgeEnumerator, "UnityEngine.ProBuilder", "WingedEdgeEnumerator");
