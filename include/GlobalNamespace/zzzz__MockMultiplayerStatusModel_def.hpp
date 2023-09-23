#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class IMultiplayerStatusModel;
}
namespace GlobalNamespace {
class MultiplayerStatusData;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class MockMultiplayerStatusModel;
}
// Type: ::MockMultiplayerStatusModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5278))
// CS Name: MockMultiplayerStatusModel
class CORDL_TYPE MockMultiplayerStatusModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IMultiplayerStatusModel
constexpr operator  GlobalNamespace::IMultiplayerStatusModel() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MockMultiplayerStatusModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockMultiplayerStatusModel", modifiers: " const&", def_value: None }]
constexpr MockMultiplayerStatusModel(MockMultiplayerStatusModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockMultiplayerStatusModel", modifiers: "&&", def_value: None }]
constexpr MockMultiplayerStatusModel(MockMultiplayerStatusModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockMultiplayerStatusModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MockMultiplayerStatusModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockMultiplayerStatusModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockMultiplayerStatusModel& operator=(MockMultiplayerStatusModel&& o) noexcept = default;
  constexpr MockMultiplayerStatusModel& operator=(MockMultiplayerStatusModel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MultiplayerStatusData __declspec(property(get=__get__multiplayerStatusData, put=__set__multiplayerStatusData))  _multiplayerStatusData;

constexpr void __set__multiplayerStatusData(GlobalNamespace::MultiplayerStatusData value) ;

constexpr GlobalNamespace::MultiplayerStatusData __get__multiplayerStatusData() const;


// Methods

/// @brief Method GetMultiplayerStatusAsync addr 0x20eb4c4 size 0x70 virtual true final true
 System::Threading::Tasks::Task_1<GlobalNamespace::MultiplayerStatusData> GetMultiplayerStatusAsync(System::Threading::CancellationToken cancellationToken) ;

// Ctor Parameters []
explicit MockMultiplayerStatusModel() ;

/// @brief Method .ctor addr 0x20eb534 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockMultiplayerStatusModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockMultiplayerStatusModel, "", "MockMultiplayerStatusModel");
