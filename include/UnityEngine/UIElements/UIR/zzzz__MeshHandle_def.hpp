#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include <cstdint>
namespace UnityEngine::UIElements::UIR {
struct Alloc;
}
namespace UnityEngine::UIElements::UIR {
class Page;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class MeshHandle;
}
// Type: UnityEngine.UIElements.UIR::MeshHandle
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7499), inst: 330 }), TypeDefinitionIndex(TypeDefinitionIndex(7499))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7525))
// CS Name: UnityEngine.UIElements.UIR.MeshHandle
class CORDL_TYPE MeshHandle : public UnityEngine::UIElements::UIR::LinkedPoolItem_1<UnityEngine::UIElements::UIR::MeshHandle> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~MeshHandle() = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshHandle", modifiers: " const&", def_value: None }]
constexpr MeshHandle(MeshHandle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshHandle", modifiers: "&&", def_value: None }]
constexpr MeshHandle(MeshHandle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MeshHandle(void* ptr) noexcept : UnityEngine::UIElements::UIR::LinkedPoolItem_1<UnityEngine::UIElements::UIR::MeshHandle>(ptr) {
}


  constexpr MeshHandle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MeshHandle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MeshHandle& operator=(MeshHandle&& o) noexcept = default;
  constexpr MeshHandle& operator=(MeshHandle const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UIR::Alloc __declspec(property(get=__get_allocVerts, put=__set_allocVerts))  allocVerts;

constexpr void __set_allocVerts(UnityEngine::UIElements::UIR::Alloc value) ;

constexpr UnityEngine::UIElements::UIR::Alloc __get_allocVerts() const;

 UnityEngine::UIElements::UIR::Alloc __declspec(property(get=__get_allocIndices, put=__set_allocIndices))  allocIndices;

constexpr void __set_allocIndices(UnityEngine::UIElements::UIR::Alloc value) ;

constexpr UnityEngine::UIElements::UIR::Alloc __get_allocIndices() const;

 uint32_t __declspec(property(get=__get_triangleCount, put=__set_triangleCount))  triangleCount;

constexpr void __set_triangleCount(uint32_t value) ;

constexpr uint32_t __get_triangleCount() const;

 UnityEngine::UIElements::UIR::Page __declspec(property(get=__get_allocPage, put=__set_allocPage))  allocPage;

constexpr void __set_allocPage(UnityEngine::UIElements::UIR::Page value) ;

constexpr UnityEngine::UIElements::UIR::Page __get_allocPage() const;

 uint32_t __declspec(property(get=__get_allocTime, put=__set_allocTime))  allocTime;

constexpr void __set_allocTime(uint32_t value) ;

constexpr uint32_t __get_allocTime() const;

 uint32_t __declspec(property(get=__get_updateAllocID, put=__set_updateAllocID))  updateAllocID;

constexpr void __set_updateAllocID(uint32_t value) ;

constexpr uint32_t __get_updateAllocID() const;


// Methods

// Ctor Parameters []
explicit MeshHandle() ;

/// @brief Method .ctor addr 0x2c55048 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(UnityEngine::UIElements::UIR::MeshHandle);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::MeshHandle, "UnityEngine.UIElements.UIR", "MeshHandle");
