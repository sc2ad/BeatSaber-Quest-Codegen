#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class BeatmapDataCallback_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class BeatmapDataCallback_1<T>;
}
// Type: ::BeatmapDataCallback`1
// Type: ::BeatmapDataCallback`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(4826))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4826), inst: 2 })
// CS Name: BeatmapDataCallback`1
class CORDL_TYPE BeatmapDataCallback_1<T> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~BeatmapDataCallback_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCallback_1", modifiers: " const&", def_value: None }]
constexpr BeatmapDataCallback_1(BeatmapDataCallback_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCallback_1", modifiers: "&&", def_value: None }]
constexpr BeatmapDataCallback_1(BeatmapDataCallback_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDataCallback_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr BeatmapDataCallback_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDataCallback_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDataCallback_1& operator=(BeatmapDataCallback_1&& o) noexcept = default;
  constexpr BeatmapDataCallback_1& operator=(BeatmapDataCallback_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit BeatmapDataCallback_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T data) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(T data, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::BeatmapDataCallback_1, "", "BeatmapDataCallback`1");
